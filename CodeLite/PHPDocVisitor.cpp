#include "PHPDocVisitor.h"
#include "PHPEntityBase.h"
#include "PHPDocComment.h"
#include "PHPEntityFunction.h"
#include "PHPEntityVariable.h"

PHPDocVisitor::PHPDocVisitor(PHPSourceFile& sourceFile, const std::vector<phpLexerToken>& comments)
    : m_sourceFile(sourceFile)
{
    for(size_t i = 0; i < comments.size(); ++i) {
        m_comments.insert(std::make_pair(comments.at(i).endLineNumber, comments.at(i)));
    }
}

PHPDocVisitor::~PHPDocVisitor() {}

void PHPDocVisitor::OnEntity(PHPEntityBase::Ptr_t entity)
{
    // Locate a comment for this entity
    entity->SetFilename(m_sourceFile.GetFilename());
    std::map<int, phpLexerToken>::iterator iter = m_comments.find(entity->GetLine() - 1);
    if(iter != m_comments.end()) {

        // we got a match
        entity->SetDocComment(iter->second.text);
        m_comments.erase(iter);

        PHPDocComment docComment(m_sourceFile, entity->GetDocComment());
        if(entity->Is(kEntityTypeFunction) && !docComment.GetReturn().IsEmpty()) {
            entity->Cast<PHPEntityFunction>()->SetReturnValue(docComment.GetReturn());
        } else if(entity->Is(kEntityTypeVariable) &&
                  (!entity->Cast<PHPEntityVariable>()->HasFlag(PHPEntityVariable::kFunctionArg))) {
            // A global variable, const or a member
            entity->Cast<PHPEntityVariable>()->SetTypeHint(docComment.GetVar());
        }
        
    } else if(entity->Is(kEntityTypeVariable) && entity->Parent() && entity->Parent()->Is(kEntityTypeFunction) &&
              entity->Cast<PHPEntityVariable>()->HasFlag(PHPEntityVariable::kFunctionArg)) {
        // A function argument
        PHPDocComment docComment(m_sourceFile, entity->Parent()->GetDocComment());
        wxString typeHint = docComment.GetParam(entity->GetName());
        if(!typeHint.IsEmpty()) {
            entity->Cast<PHPEntityVariable>()->SetTypeHint(typeHint);
        }
    }
}
