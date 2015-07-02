//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: WebToolsBase.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#include "WebToolsBase.h"


// Declare the bitmap loading function
extern void wxCD9C6InitBitmapResources();

static bool bBitmapLoaded = false;


WebToolsSettingsBase::WebToolsSettingsBase(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style)
    : wxDialog(parent, id, title, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxCD9C6InitBitmapResources();
        bBitmapLoaded = true;
    }
    
    boxSizer2 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(boxSizer2);
    
    m_notebook10 = new wxNotebook(this, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxBK_DEFAULT);
    m_notebook10->SetName(wxT("m_notebook10"));
    
    boxSizer2->Add(m_notebook10, 1, wxALL|wxEXPAND, 5);
    
    m_panel56 = new wxPanel(m_notebook10, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxTAB_TRAVERSAL);
    m_notebook10->AddPage(m_panel56, _("Code Completion"), false);
    
    boxSizer58 = new wxBoxSizer(wxVERTICAL);
    m_panel56->SetSizer(boxSizer58);
    
    m_checkBoxEnableJsCC = new wxCheckBox(m_panel56, wxID_ANY, _("Enable JavaScript code completion"), wxDefaultPosition, wxSize(-1,-1), 0);
    m_checkBoxEnableJsCC->SetValue(true);
    m_checkBoxEnableJsCC->SetToolTip(_("Enable JavaScript code completion"));
    
    boxSizer58->Add(m_checkBoxEnableJsCC, 0, wxALL, 5);
    
    m_checkBoxEnableXmlCC = new wxCheckBox(m_panel56, wxID_ANY, _("Enable XML code completion"), wxDefaultPosition, wxSize(-1,-1), 0);
    m_checkBoxEnableXmlCC->SetValue(true);
    m_checkBoxEnableXmlCC->SetToolTip(_("Enable XML code completion"));
    
    boxSizer58->Add(m_checkBoxEnableXmlCC, 0, wxALL, 5);
    
    m_checkBoxEnableHtmlCC = new wxCheckBox(m_panel56, wxID_ANY, _("Enable HTML code completion"), wxDefaultPosition, wxSize(-1,-1), 0);
    m_checkBoxEnableHtmlCC->SetValue(true);
    m_checkBoxEnableHtmlCC->SetToolTip(_("Enable HTML code completion"));
    
    boxSizer58->Add(m_checkBoxEnableHtmlCC, 0, wxALL, 5);
    
    m_panel12 = new wxPanel(m_notebook10, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxTAB_TRAVERSAL);
    m_notebook10->AddPage(m_panel12, _("JavaScript"), false);
    
    boxSizer22 = new wxBoxSizer(wxVERTICAL);
    m_panel12->SetSizer(boxSizer22);
    
    wxArrayString m_pgMgrArr;
    wxUnusedVar(m_pgMgrArr);
    wxArrayInt m_pgMgrIntArr;
    wxUnusedVar(m_pgMgrIntArr);
    m_pgMgr = new wxPropertyGridManager(m_panel12, wxID_ANY, wxDefaultPosition, wxSize(300,400), wxPG_DESCRIPTION|wxPG_SPLITTER_AUTO_CENTER|wxPG_BOLD_MODIFIED);
    
    boxSizer22->Add(m_pgMgr, 1, wxALL|wxEXPAND, 5);
    
    m_pgProp26 = m_pgMgr->Append(  new wxPropertyCategory( _("General") ) );
    m_pgProp26->SetHelpString(wxT(""));
    
    m_pgPropLogging = m_pgMgr->AppendIn( m_pgProp26,  new wxBoolProperty( _("Verbose Logging"), wxPG_LABEL, 1) );
    m_pgPropLogging->SetHelpString(_("The JavaScript code completion uses the \"tern\" engine.\nCheck this option to start tern in verbose mode"));
    
    m_pgProp32 = m_pgMgr->Append(  new wxPropertyCategory( _("Libraries") ) );
    m_pgProp32->SetHelpString(_("Enable Code Completion for the selected libraries"));
    
    m_pgPropEcma5 = m_pgMgr->AppendIn( m_pgProp32,  new wxBoolProperty( _("Ecma5"), wxPG_LABEL, 1) );
    m_pgPropEcma5->SetHelpString(wxT(""));
    
    m_pgPropEcma6 = m_pgMgr->AppendIn( m_pgProp32,  new wxBoolProperty( _("Ecma6"), wxPG_LABEL, 1) );
    m_pgPropEcma6->SetHelpString(wxT(""));
    
    m_pgPropJQuery = m_pgMgr->AppendIn( m_pgProp32,  new wxBoolProperty( _("jQuery"), wxPG_LABEL, 1) );
    m_pgPropJQuery->SetHelpString(_("Support Code Completion for jQuery framework"));
    
    m_pgPropUnderscore = m_pgMgr->AppendIn( m_pgProp32,  new wxBoolProperty( _("Underscore"), wxPG_LABEL, 1) );
    m_pgPropUnderscore->SetHelpString(_("Enable code completion for the Underscore library"));
    
    m_pgPropBrowser = m_pgMgr->AppendIn( m_pgProp32,  new wxBoolProperty( _("Browser"), wxPG_LABEL, 1) );
    m_pgPropBrowser->SetHelpString(_("Enable code completion for browser mode (DOM, document, window etc)"));
    
    m_pgPropChai = m_pgMgr->AppendIn( m_pgProp32,  new wxBoolProperty( _("Chai"), wxPG_LABEL, 1) );
    m_pgPropChai->SetHelpString(_("Enable code completion for the chain assertion library"));
    
    m_pgPropQML = m_pgMgr->AppendIn( m_pgProp32,  new wxBoolProperty( _("QML"), wxPG_LABEL, 1) );
    m_pgPropQML->SetHelpString(_("Support for Qt's QML extension for JavaScript"));
    
    m_pgProp46 = m_pgMgr->Append(  new wxPropertyCategory( _("Plugins") ) );
    m_pgProp46->SetHelpString(wxT(""));
    
    m_pgPropAngular = m_pgMgr->AppendIn( m_pgProp46,  new wxBoolProperty( _("Angular"), wxPG_LABEL, 1) );
    m_pgPropAngular->SetHelpString(_("Adds the angular object to the top-level environment, and tries to wire up some of the bizarre dependency management scheme from this library, so that dependency injections get the right types"));
    
    m_pgPropStrings = m_pgMgr->AppendIn( m_pgProp46,  new wxBoolProperty( _("Strings"), wxPG_LABEL, 1) );
    m_pgPropStrings->SetHelpString(_("When enabled, this plugin will gather (short) strings in your code, and completing when inside a string will try to complete to previously seen strings"));
    
    m_pgPropNode = m_pgMgr->AppendIn( m_pgProp46,  new wxBoolProperty( _("Node.js"), wxPG_LABEL, 1) );
    m_pgPropNode->SetHelpString(_("Provides variables that are part of the node environment, such as process and require, and hooks up require to try and find the dependencies that are being loaded, and assign them the correct types. It also includes types for the built-in modules that node.js provides (\"fs\", \"http\", etc)"));
    
    m_stdBtnSizer4 = new wxStdDialogButtonSizer();
    
    boxSizer2->Add(m_stdBtnSizer4, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5);
    
    m_buttonCancel = new wxButton(this, wxID_CANCEL, wxT(""), wxDefaultPosition, wxSize(-1, -1), 0);
    m_stdBtnSizer4->AddButton(m_buttonCancel);
    
    m_buttonOK = new wxButton(this, wxID_OK, wxT(""), wxDefaultPosition, wxSize(-1, -1), 0);
    m_buttonOK->SetDefault();
    m_stdBtnSizer4->AddButton(m_buttonOK);
    m_stdBtnSizer4->Realize();
    
    
    #if wxVERSION_NUMBER >= 2900
    if(!wxPersistenceManager::Get().Find(m_notebook10)){
        wxPersistenceManager::Get().RegisterAndRestore(m_notebook10);
    } else {
        wxPersistenceManager::Get().Restore(m_notebook10);
    }
    #endif
    
    SetName(wxT("WebToolsSettingsBase"));
    SetSizeHints(-1,-1);
    if ( GetSizer() ) {
         GetSizer()->Fit(this);
    }
    CentreOnParent(wxBOTH);
#if wxVERSION_NUMBER >= 2900
    if(!wxPersistenceManager::Get().Find(this)) {
        wxPersistenceManager::Get().RegisterAndRestore(this);
    } else {
        wxPersistenceManager::Get().Restore(this);
    }
#endif
    // Connect events
    m_checkBoxEnableJsCC->Connect(wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(WebToolsSettingsBase::OnModified), NULL, this);
    m_checkBoxEnableXmlCC->Connect(wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(WebToolsSettingsBase::OnModified), NULL, this);
    m_checkBoxEnableHtmlCC->Connect(wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(WebToolsSettingsBase::OnModified), NULL, this);
    m_pgMgr->Connect(wxEVT_PG_CHANGED, wxPropertyGridEventHandler(WebToolsSettingsBase::OnJSValueChanged), NULL, this);
    m_buttonOK->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(WebToolsSettingsBase::OnOKUI), NULL, this);
    m_buttonOK->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(WebToolsSettingsBase::OnOK), NULL, this);
    
}

WebToolsSettingsBase::~WebToolsSettingsBase()
{
    m_checkBoxEnableJsCC->Disconnect(wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(WebToolsSettingsBase::OnModified), NULL, this);
    m_checkBoxEnableXmlCC->Disconnect(wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(WebToolsSettingsBase::OnModified), NULL, this);
    m_checkBoxEnableHtmlCC->Disconnect(wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(WebToolsSettingsBase::OnModified), NULL, this);
    m_pgMgr->Disconnect(wxEVT_PG_CHANGED, wxPropertyGridEventHandler(WebToolsSettingsBase::OnJSValueChanged), NULL, this);
    m_buttonOK->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(WebToolsSettingsBase::OnOKUI), NULL, this);
    m_buttonOK->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(WebToolsSettingsBase::OnOK), NULL, this);
    
}

NodeJSDebuggerDlgBase::NodeJSDebuggerDlgBase(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style)
    : wxDialog(parent, id, title, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxCD9C6InitBitmapResources();
        bBitmapLoaded = true;
    }
    
    boxSizer68 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(boxSizer68);
    
    flexGridSizer76 = new wxFlexGridSizer(0, 2, 0, 0);
    flexGridSizer76->SetFlexibleDirection( wxBOTH );
    flexGridSizer76->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    flexGridSizer76->AddGrowableCol(1);
    
    boxSizer68->Add(flexGridSizer76, 1, wxALL|wxEXPAND, 5);
    
    m_staticText78 = new wxStaticText(this, wxID_ANY, _("Node.js executable:"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    flexGridSizer76->Add(m_staticText78, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    
    m_filePickerNodeJS = new wxFilePickerCtrl(this, wxID_ANY, wxEmptyString, _("Select a file"), wxT("*"), wxDefaultPosition, wxSize(-1,-1), wxFLP_DEFAULT_STYLE|wxFLP_USE_TEXTCTRL|wxFLP_SMALL);
    m_filePickerNodeJS->SetToolTip(_("Select Node.js executable"));
    m_filePickerNodeJS->SetFocus();
    
    flexGridSizer76->Add(m_filePickerNodeJS, 0, wxALL|wxEXPAND, 5);
    
    m_staticText82 = new wxStaticText(this, wxID_ANY, _("Script to debug:"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    flexGridSizer76->Add(m_staticText82, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    
    m_filePickerScript = new wxFilePickerCtrl(this, wxID_ANY, wxEmptyString, _("Select a file"), wxT("*"), wxDefaultPosition, wxSize(-1,-1), wxFLP_DEFAULT_STYLE|wxFLP_USE_TEXTCTRL|wxFLP_SMALL);
    m_filePickerScript->SetToolTip(_("Select the script to execute"));
    
    flexGridSizer76->Add(m_filePickerScript, 0, wxALL|wxEXPAND, 5);
    
    m_staticTextDebuggerPort = new wxStaticText(this, wxID_ANY, _("Debugger port:"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    flexGridSizer76->Add(m_staticTextDebuggerPort, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    
    m_textCtrlPort = new wxTextCtrl(this, wxID_ANY, wxT("5858"), wxDefaultPosition, wxSize(-1,-1), 0);
    #if wxVERSION_NUMBER >= 3000
    m_textCtrlPort->SetHint(wxT(""));
    #endif
    
    flexGridSizer76->Add(m_textCtrlPort, 0, wxALL|wxEXPAND, 5);
    
    m_stdBtnSizer70 = new wxStdDialogButtonSizer();
    
    boxSizer68->Add(m_stdBtnSizer70, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5);
    
    m_buttonOK = new wxButton(this, wxID_OK, wxT(""), wxDefaultPosition, wxSize(-1, -1), 0);
    m_buttonOK->SetDefault();
    m_stdBtnSizer70->AddButton(m_buttonOK);
    
    m_button74 = new wxButton(this, wxID_CANCEL, wxT(""), wxDefaultPosition, wxSize(-1, -1), 0);
    m_stdBtnSizer70->AddButton(m_button74);
    m_stdBtnSizer70->Realize();
    
    SetName(wxT("NodeJSDebuggerDlgBase"));
    SetSizeHints(-1,-1);
    if ( GetSizer() ) {
         GetSizer()->Fit(this);
    }
    CentreOnParent(wxBOTH);
#if wxVERSION_NUMBER >= 2900
    if(!wxPersistenceManager::Get().Find(this)) {
        wxPersistenceManager::Get().RegisterAndRestore(this);
    } else {
        wxPersistenceManager::Get().Restore(this);
    }
#endif
    // Connect events
    m_buttonOK->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(NodeJSDebuggerDlgBase::OnOKUI), NULL, this);
    
}

NodeJSDebuggerDlgBase::~NodeJSDebuggerDlgBase()
{
    m_buttonOK->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(NodeJSDebuggerDlgBase::OnOKUI), NULL, this);
    
}

NodeJSDebuggerPaneBase::NodeJSDebuggerPaneBase(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style)
    : wxPanel(parent, id, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxCD9C6InitBitmapResources();
        bBitmapLoaded = true;
    }
    
    boxSizer88 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(boxSizer88);
    
    m_splitter104 = new wxSplitterWindow(this, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxSP_LIVE_UPDATE);
    m_splitter104->SetSashGravity(0.5);
    m_splitter104->SetMinimumPaneSize(10);
    
    boxSizer88->Add(m_splitter104, 1, wxALL|wxEXPAND, 0);
    
    m_splitterPage112 = new wxPanel(m_splitter104, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxTAB_TRAVERSAL);
    
    boxSizer120 = new wxBoxSizer(wxVERTICAL);
    m_splitterPage112->SetSizer(boxSizer120);
    
    m_dataviewLocals = new wxDataViewCtrl(m_splitterPage112, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxDV_VERT_RULES|wxDV_HORIZ_RULES|wxDV_ROW_LINES|wxDV_SINGLE);
    
    m_dataviewLocalsModel = new m_dataview126Model;
    m_dataviewLocalsModel->SetColCount( 3 );
    m_dataviewLocals->AssociateModel(m_dataviewLocalsModel.get() );
    
    boxSizer120->Add(m_dataviewLocals, 1, wxALL|wxEXPAND, 2);
    
    m_dataviewLocals->AppendTextColumn(_("Name"), m_dataviewLocals->GetColumnCount(), wxDATAVIEW_CELL_INERT, 150, wxALIGN_LEFT);
    m_dataviewLocals->AppendTextColumn(_("Type"), m_dataviewLocals->GetColumnCount(), wxDATAVIEW_CELL_INERT, 100, wxALIGN_LEFT);
    m_dataviewLocals->AppendTextColumn(_("Value"), m_dataviewLocals->GetColumnCount(), wxDATAVIEW_CELL_INERT, -2, wxALIGN_LEFT);
    m_splitterPage108 = new wxPanel(m_splitter104, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxTAB_TRAVERSAL);
    m_splitter104->SplitVertically(m_splitterPage112, m_splitterPage108, 0);
    
    boxSizer118 = new wxBoxSizer(wxVERTICAL);
    m_splitterPage108->SetSizer(boxSizer118);
    
    m_notebook = new Notebook(m_splitterPage108, wxID_ANY, wxDefaultPosition, wxSize(-1,250), kNotebook_Default | kNotebook_AllowDnD);
    m_notebook->SetName(wxT("m_notebook"));
    
    boxSizer118->Add(m_notebook, 1, wxALL|wxEXPAND, 2);
    
    m_panelCallstack = new wxPanel(m_notebook, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxTAB_TRAVERSAL);
    m_notebook->AddPage(m_panelCallstack, _("Call Stack"), true);
    
    boxSizer96 = new wxBoxSizer(wxVERTICAL);
    m_panelCallstack->SetSizer(boxSizer96);
    
    m_dvListCtrlCallstack = new wxDataViewListCtrl(m_panelCallstack, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxDV_VERT_RULES|wxDV_ROW_LINES|wxDV_SINGLE);
    
    boxSizer96->Add(m_dvListCtrlCallstack, 1, wxALL|wxEXPAND, 2);
    
    m_dvListCtrlCallstack->AppendTextColumn(_("#"), wxDATAVIEW_CELL_INERT, 20, wxALIGN_LEFT);
    m_dvListCtrlCallstack->AppendTextColumn(_("Function"), wxDATAVIEW_CELL_INERT, 200, wxALIGN_LEFT);
    m_dvListCtrlCallstack->AppendTextColumn(_("File"), wxDATAVIEW_CELL_INERT, -2, wxALIGN_LEFT);
    m_dvListCtrlCallstack->AppendTextColumn(_("Line"), wxDATAVIEW_CELL_INERT, 100, wxALIGN_LEFT);
    m_panelConsoleLog = new wxPanel(m_notebook, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxTAB_TRAVERSAL);
    m_notebook->AddPage(m_panelConsoleLog, _("Console"), false);
    
    boxSizer98 = new wxBoxSizer(wxVERTICAL);
    m_panelConsoleLog->SetSizer(boxSizer98);
    
    m_consoleLog = new wxStyledTextCtrl(m_panelConsoleLog, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), 0);
    // Configure the fold margin
    m_consoleLog->SetMarginType     (4, wxSTC_MARGIN_SYMBOL);
    m_consoleLog->SetMarginMask     (4, wxSTC_MASK_FOLDERS);
    m_consoleLog->SetMarginSensitive(4, true);
    m_consoleLog->SetMarginWidth    (4, 0);
    
    // Configure the tracker margin
    m_consoleLog->SetMarginWidth(1, 0);
    
    // Configure the symbol margin
    m_consoleLog->SetMarginType (2, wxSTC_MARGIN_SYMBOL);
    m_consoleLog->SetMarginMask (2, ~(wxSTC_MASK_FOLDERS));
    m_consoleLog->SetMarginWidth(2, 0);
    m_consoleLog->SetMarginSensitive(2, true);
    
    // Configure the line numbers margin
    m_consoleLog->SetMarginType(0, wxSTC_MARGIN_NUMBER);
    m_consoleLog->SetMarginWidth(0,0);
    
    // Configure the line symbol margin
    m_consoleLog->SetMarginType(3, wxSTC_MARGIN_FORE);
    m_consoleLog->SetMarginMask(3, 0);
    m_consoleLog->SetMarginWidth(3,0);
    // Select the lexer
    m_consoleLog->SetLexer(wxSTC_LEX_NULL);
    // Set default font / styles
    m_consoleLog->StyleClearAll();
    m_consoleLog->SetWrapMode(0);
    m_consoleLog->SetIndentationGuides(0);
    m_consoleLog->SetKeyWords(0, wxT(""));
    m_consoleLog->SetKeyWords(1, wxT(""));
    m_consoleLog->SetKeyWords(2, wxT(""));
    m_consoleLog->SetKeyWords(3, wxT(""));
    m_consoleLog->SetKeyWords(4, wxT(""));
    
    boxSizer98->Add(m_consoleLog, 1, wxALL|wxEXPAND, 2);
    
    SetName(wxT("NodeJSDebuggerPaneBase"));
    SetSizeHints(-1,-1);
    if ( GetSizer() ) {
         GetSizer()->Fit(this);
    }
    CentreOnParent(wxBOTH);
    // Connect events
    m_dvListCtrlCallstack->Connect(wxEVT_COMMAND_DATAVIEW_ITEM_ACTIVATED, wxDataViewEventHandler(NodeJSDebuggerPaneBase::OnItemActivated), NULL, this);
    
}

NodeJSDebuggerPaneBase::~NodeJSDebuggerPaneBase()
{
    m_dvListCtrlCallstack->Disconnect(wxEVT_COMMAND_DATAVIEW_ITEM_ACTIVATED, wxDataViewEventHandler(NodeJSDebuggerPaneBase::OnItemActivated), NULL, this);
    
}
