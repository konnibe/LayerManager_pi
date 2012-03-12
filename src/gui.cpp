///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jun 30 2011)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "gui.h"

#include "bitmaps/empty.xpm"
#include "folder.xpm"

///////////////////////////////////////////////////////////////////////////

MainDialogBase::MainDialogBase( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( -1,-1 ), wxDefaultSize );
	
	wxBoxSizer* mainSizer;
	mainSizer = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxHORIZONTAL );
	
	m_textCtrlLabelDir = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( -1,-1 ), 0 );
	m_textCtrlLabelDir->SetMinSize( wxSize( 570,-1 ) );
	
	bSizer13->Add( m_textCtrlLabelDir, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_bpButtonDir = new wxBitmapButton( this, wxID_ANY, wxBitmap( folder ), wxDefaultPosition, wxSize( -1,-1 ), wxBU_AUTODRAW );
	bSizer13->Add( m_bpButtonDir, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	mainSizer->Add( bSizer13, 0, 0, 5 );
	
	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );
	
	m_splitter1 = new wxSplitterWindow( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSP_3D );
	m_splitter1->Connect( wxEVT_IDLE, wxIdleEventHandler( MainDialogBase::m_splitter1OnIdle ), NULL, this );
	
	m_panel61 = new wxPanel( m_splitter1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxHORIZONTAL );
	
	m_notebook1 = new wxNotebook( m_panel61, wxID_ANY, wxDefaultPosition, wxSize( 240,-1 ), 0 );
	m_panel2 = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxVERTICAL );
	
	m_treeCtrlDir = new wxTreeCtrl( m_panel2, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTR_DEFAULT_STYLE|wxTR_EDIT_LABELS );
	m_menuRightClickDirTree = new wxMenu();
	wxMenuItem* m_menuItemDirTreeDelete;
	m_menuItemDirTreeDelete = new wxMenuItem( m_menuRightClickDirTree, wxID_ANY, wxString( _("Delete Item") ) , wxEmptyString, wxITEM_NORMAL );
	m_menuRightClickDirTree->Append( m_menuItemDirTreeDelete );
	
	wxMenuItem* m_menuItemAddDir;
	m_menuItemAddDir = new wxMenuItem( m_menuRightClickDirTree, wxID_ANY, wxString( _("Add Directory") ) , wxEmptyString, wxITEM_NORMAL );
	m_menuRightClickDirTree->Append( m_menuItemAddDir );
	
	
	bSizer3->Add( m_treeCtrlDir, 1, wxALL|wxEXPAND, 0 );
	
	m_panel2->SetSizer( bSizer3 );
	m_panel2->Layout();
	bSizer3->Fit( m_panel2 );
	m_notebook1->AddPage( m_panel2, _("Layer"), true );
	m_panel10 = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer131;
	bSizer131 = new wxBoxSizer( wxVERTICAL );
	
	m_treeCtrlExplorer = new wxTreeCtrl( m_panel10, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTR_DEFAULT_STYLE );
	bSizer131->Add( m_treeCtrlExplorer, 1, wxALL|wxEXPAND, 0 );
	
	m_panel10->SetSizer( bSizer131 );
	m_panel10->Layout();
	bSizer131->Fit( m_panel10 );
	m_notebook1->AddPage( m_panel10, _("Explorer"), false );
	m_panel11 = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxVERTICAL );
	
	m_treeCtrlTrash = new wxTreeCtrl( m_panel11, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTR_DEFAULT_STYLE );
	m_menuPaperbag = new wxMenu();
	wxMenuItem* m_menuItemPaperbagRecover;
	m_menuItemPaperbagRecover = new wxMenuItem( m_menuPaperbag, wxID_ANY, wxString( _("Recover File") ) , wxEmptyString, wxITEM_NORMAL );
	m_menuPaperbag->Append( m_menuItemPaperbagRecover );
	
	wxMenuItem* m_menuItemPaperbagEmpty;
	m_menuItemPaperbagEmpty = new wxMenuItem( m_menuPaperbag, wxID_ANY, wxString( _("Empty Paperbag") ) , wxEmptyString, wxITEM_NORMAL );
	m_menuPaperbag->Append( m_menuItemPaperbagEmpty );
	
	
	bSizer14->Add( m_treeCtrlTrash, 1, wxALL|wxEXPAND, 0 );
	
	m_panel11->SetSizer( bSizer14 );
	m_panel11->Layout();
	bSizer14->Fit( m_panel11 );
	m_notebook1->AddPage( m_panel11, _("Paperbag"), false );
	
	bSizer8->Add( m_notebook1, 1, wxALL|wxEXPAND, 0 );
	
	m_panel61->SetSizer( bSizer8 );
	m_panel61->Layout();
	bSizer8->Fit( m_panel61 );
	m_panel91 = new wxPanel( m_splitter1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer121;
	bSizer121 = new wxBoxSizer( wxVERTICAL );
	
	m_splitter3 = new wxSplitterWindow( m_panel91, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSP_3D );
	m_splitter3->Connect( wxEVT_IDLE, wxIdleEventHandler( MainDialogBase::m_splitter3OnIdle ), NULL, this );
	
	m_panel8 = new wxPanel( m_splitter3, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxHORIZONTAL );
	
	m_buttonNewLayer = new wxButton( m_panel8, wxID_ANY, _("New"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer12->Add( m_buttonNewLayer, 0, wxALL, 5 );
	
	m_button1 = new wxButton( m_panel8, wxID_ANY, _("Save"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer12->Add( m_button1, 0, wxALL, 5 );
	
	bSizer10->Add( bSizer12, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_treeCtrlLayerElements = new wxTreeCtrl( m_panel8, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTR_DEFAULT_STYLE|wxTR_EDIT_LABELS );
	m_menuRightClickLayerElements = new wxMenu();
	m_menuItemAddText = new wxMenuItem( m_menuRightClickLayerElements, wxID_ANY, wxString( _("Add Textlink ") ) , wxEmptyString, wxITEM_NORMAL );
	m_menuRightClickLayerElements->Append( m_menuItemAddText );
	
	wxMenuItem* m_menuItemElementsDelete;
	m_menuItemElementsDelete = new wxMenuItem( m_menuRightClickLayerElements, wxID_ANY, wxString( _("Delete Item") ) , wxEmptyString, wxITEM_NORMAL );
	m_menuRightClickLayerElements->Append( m_menuItemElementsDelete );
	
	
	bSizer10->Add( m_treeCtrlLayerElements, 1, wxEXPAND|wxALL, 0 );
	
	m_panel8->SetSizer( bSizer10 );
	m_panel8->Layout();
	bSizer10->Fit( m_panel8 );
	m_panel9 = new wxPanel( m_splitter3, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxHORIZONTAL );
	
	m_notebook2 = new wxNotebook( m_panel9, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	m_panel5 = new wxPanel( m_notebook2, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer132;
	bSizer132 = new wxBoxSizer( wxVERTICAL );
	
	m_splitter31 = new wxSplitterWindow( m_panel5, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSP_3D );
	m_panel101 = new wxPanel( m_splitter31, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_panel101->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_3DLIGHT ) );
	
	wxBoxSizer* bSizer16;
	bSizer16 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer18;
	bSizer18 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText51 = new wxStaticText( m_panel101, wxID_ANY, _("Type "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText51->Wrap( -1 );
	bSizer18->Add( m_staticText51, 0, wxALL, 0 );
	
	m_staticTextSettingsType = new wxStaticText( m_panel101, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextSettingsType->Wrap( -1 );
	m_staticTextSettingsType->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), 70, 90, 92, false, wxEmptyString ) );
	
	bSizer18->Add( m_staticTextSettingsType, 0, wxALL, 0 );
	
	bSizer16->Add( bSizer18, 0, wxEXPAND, 0 );
	
	wxBoxSizer* bSizer191;
	bSizer191 = new wxBoxSizer( wxHORIZONTAL );
	
	m_bitmap1 = new wxStaticBitmap( m_panel101, wxID_ANY, wxBitmap( empty ), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer191->Add( m_bitmap1, 0, wxALL, 5 );
	
	m_staticText13 = new wxStaticText( m_panel101, wxID_ANY, _("MyLabel"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText13->Wrap( -1 );
	bSizer191->Add( m_staticText13, 0, wxALL|wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer16->Add( bSizer191, 0, wxEXPAND, 0 );
	
	m_staticline2 = new wxStaticLine( m_panel101, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer16->Add( m_staticline2, 0, wxEXPAND | wxALL, 0 );
	
	wxBoxSizer* bSizer19;
	bSizer19 = new wxBoxSizer( wxHORIZONTAL );
	
	m_checkBoxSettingsVisible = new wxCheckBox( m_panel101, wxID_ANY, _("Visible"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer19->Add( m_checkBoxSettingsVisible, 0, wxALL, 5 );
	
	m_checkBoxSettingsNameVisible = new wxCheckBox( m_panel101, wxID_ANY, _("Name Visible"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer19->Add( m_checkBoxSettingsNameVisible, 0, wxALL, 5 );
	
	bSizer16->Add( bSizer19, 0, wxEXPAND, 5 );
	
	m_staticText1 = new wxStaticText( m_panel101, wxID_ANY, _("Name"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1->Wrap( -1 );
	bSizer16->Add( m_staticText1, 0, wxALL, 0 );
	
	m_textCtrlSettingsName = new wxTextCtrl( m_panel101, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	bSizer16->Add( m_textCtrlSettingsName, 0, wxALL|wxEXPAND, 0 );
	
	m_staticText2 = new wxStaticText( m_panel101, wxID_ANY, _("Description"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2->Wrap( -1 );
	bSizer16->Add( m_staticText2, 0, wxALL, 0 );
	
	m_textCtrlSetingsDescription = new wxTextCtrl( m_panel101, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_MULTILINE );
	bSizer16->Add( m_textCtrlSetingsDescription, 0, wxALL|wxEXPAND, 0 );
	
	wxBoxSizer* bSizer20;
	bSizer20 = new wxBoxSizer( wxVERTICAL );
	
	wxFlexGridSizer* fgSizer1;
	fgSizer1 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer1->SetFlexibleDirection( wxBOTH );
	fgSizer1->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticText5 = new wxStaticText( m_panel101, wxID_ANY, _("Latitude     "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText5->Wrap( -1 );
	fgSizer1->Add( m_staticText5, 0, wxALL|wxALIGN_CENTER_VERTICAL, 0 );
	
	m_textCtrlLatitude = new wxTextCtrl( m_panel101, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( -1,-1 ), wxTE_PROCESS_ENTER );

	m_textCtrlLatitude->SetMinSize( wxSize( 150,-1 ) );
	
	fgSizer1->Add( m_textCtrlLatitude, 1, wxALL|wxEXPAND, 0 );
	
	m_staticText3 = new wxStaticText( m_panel101, wxID_ANY, _("Longitude "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3->Wrap( -1 );
	fgSizer1->Add( m_staticText3, 0, wxALL|wxALIGN_CENTER_VERTICAL, 0 );
	
	m_textCtrlSettingsLongitude = new wxTextCtrl( m_panel101, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	fgSizer1->Add( m_textCtrlSettingsLongitude, 1, wxALL|wxEXPAND, 0 );
	
	m_staticText8 = new wxStaticText( m_panel101, wxID_ANY, _("Date / Time"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText8->Wrap( -1 );
	fgSizer1->Add( m_staticText8, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0 );
	
	m_textCtrlDateTime = new wxTextCtrl( m_panel101, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	fgSizer1->Add( m_textCtrlDateTime, 1, wxALL|wxEXPAND, 0 );
	
	m_staticText9 = new wxStaticText( m_panel101, wxID_ANY, _("Route Start"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText9->Wrap( -1 );
	fgSizer1->Add( m_staticText9, 0, wxALL|wxALIGN_CENTER_VERTICAL, 0 );
	
	m_textCtrlSettingsStart = new wxTextCtrl( m_panel101, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	fgSizer1->Add( m_textCtrlSettingsStart, 1, wxALL|wxEXPAND, 0 );
	
	m_staticText10 = new wxStaticText( m_panel101, wxID_ANY, _("Route End  "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText10->Wrap( -1 );
	fgSizer1->Add( m_staticText10, 0, wxALL|wxALIGN_CENTER_VERTICAL, 0 );
	
	m_textCtrlSettingsEnd = new wxTextCtrl( m_panel101, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	fgSizer1->Add( m_textCtrlSettingsEnd, 1, wxALL|wxEXPAND, 0 );
	
	m_staticText11 = new wxStaticText( m_panel101, wxID_ANY, _("Link-Name"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11->Wrap( -1 );
	fgSizer1->Add( m_staticText11, 0, wxALL, 0 );
	
	m_textCtrlSettingsLinkName = new wxTextCtrl( m_panel101, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	fgSizer1->Add( m_textCtrlSettingsLinkName, 1, wxALL|wxEXPAND, 0 );
	
	m_staticText12 = new wxStaticText( m_panel101, wxID_ANY, _("File"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText12->Wrap( -1 );
	fgSizer1->Add( m_staticText12, 0, wxALL, 0 );
	
	m_staticTextSettingsLinksFile = new wxStaticText( m_panel101, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextSettingsLinksFile->Wrap( 30 );
	fgSizer1->Add( m_staticTextSettingsLinksFile, 0, wxALL, 0 );
	
	bSizer20->Add( fgSizer1, 1, wxEXPAND, 5 );
	
	bSizer16->Add( bSizer20, 0, wxEXPAND, 5 );
	
	m_panel101->SetSizer( bSizer16 );
	m_panel101->Layout();
	bSizer16->Fit( m_panel101 );
	m_panel111 = new wxPanel( m_splitter31, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer171;
	bSizer171 = new wxBoxSizer( wxVERTICAL );
	
	m_listCtrlSettingsIcons = new wxListCtrl( m_panel111, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_REPORT );
	bSizer171->Add( m_listCtrlSettingsIcons, 1, wxALL|wxEXPAND, 0 );
	
	m_panel111->SetSizer( bSizer171 );
	m_panel111->Layout();
	bSizer171->Fit( m_panel111 );
	m_splitter31->SplitHorizontally( m_panel101, m_panel111, -1 );
	bSizer132->Add( m_splitter31, 1, wxEXPAND, 5 );
	
	m_panel5->SetSizer( bSizer132 );
	m_panel5->Layout();
	bSizer132->Fit( m_panel5 );
	m_notebook2->AddPage( m_panel5, _("Settings"), true );
	m_panel6 = new wxPanel( m_notebook2, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxVERTICAL );
	
	m_textCtrlEditText = new wxTextCtrl( m_panel6, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_MULTILINE );
	bSizer6->Add( m_textCtrlEditText, 1, wxALL|wxEXPAND, 0 );
	
	m_panel6->SetSizer( bSizer6 );
	m_panel6->Layout();
	bSizer6->Fit( m_panel6 );
	m_notebook2->AddPage( m_panel6, _("TinyText"), false );
	
	bSizer11->Add( m_notebook2, 1, wxEXPAND | wxALL, 5 );
	
	m_panel9->SetSizer( bSizer11 );
	m_panel9->Layout();
	bSizer11->Fit( m_panel9 );
	m_splitter3->SplitVertically( m_panel8, m_panel9, 0 );
	bSizer121->Add( m_splitter3, 1, wxEXPAND, 5 );
	
	m_panel91->SetSizer( bSizer121 );
	m_panel91->Layout();
	bSizer121->Fit( m_panel91 );
	m_splitter1->SplitVertically( m_panel61, m_panel91, 240 );
	bSizer2->Add( m_splitter1, 1, wxEXPAND, 5 );
	
	mainSizer->Add( bSizer2, 1, wxEXPAND, 5 );
	
	m_staticline3 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	mainSizer->Add( m_staticline3, 0, wxEXPAND | wxALL, 5 );
	
	m_sdbSizer = new wxStdDialogButtonSizer();
	m_sdbSizerOK = new wxButton( this, wxID_OK );
	m_sdbSizer->AddButton( m_sdbSizerOK );
	m_sdbSizerCancel = new wxButton( this, wxID_CANCEL );
	m_sdbSizer->AddButton( m_sdbSizerCancel );
	m_sdbSizer->Realize();
	mainSizer->Add( m_sdbSizer, 0, wxBOTTOM|wxRIGHT|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	this->SetSizer( mainSizer );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( MainDialogBase::OnCloseDialog ) );
	this->Connect( wxEVT_INIT_DIALOG, wxInitDialogEventHandler( MainDialogBase::OnInit ) );
	m_bpButtonDir->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainDialogBase::OnButtonClickLayerDir ), NULL, this );
	m_notebook1->Connect( wxEVT_COMMAND_NOTEBOOK_PAGE_CHANGED, wxNotebookEventHandler( MainDialogBase::OnNotebook1PageChanged ), NULL, this );
	m_treeCtrlDir->Connect( wxEVT_LEFT_DOWN, wxMouseEventHandler( MainDialogBase::OnLeftDownDirTree ), NULL, this );
	m_treeCtrlDir->Connect( wxEVT_LEFT_UP, wxMouseEventHandler( MainDialogBase::OnLeftUpDirTree ), NULL, this );
	m_treeCtrlDir->Connect( wxEVT_COMMAND_TREE_BEGIN_DRAG, wxTreeEventHandler( MainDialogBase::OnTreeBeginnDragFile ), NULL, this );
	m_treeCtrlDir->Connect( wxEVT_COMMAND_TREE_END_LABEL_EDIT, wxTreeEventHandler( MainDialogBase::OnTreeEndLabelEditDirTree ), NULL, this );
	m_treeCtrlDir->Connect( wxEVT_COMMAND_TREE_ITEM_ACTIVATED, wxTreeEventHandler( MainDialogBase::OnTreeItemActivatedDirTree ), NULL, this );
	m_treeCtrlDir->Connect( wxEVT_COMMAND_TREE_ITEM_RIGHT_CLICK, wxTreeEventHandler( MainDialogBase::onTreeItemRightClickDirTree ), NULL, this );
	m_treeCtrlDir->Connect( wxEVT_COMMAND_TREE_SEL_CHANGED, wxTreeEventHandler( MainDialogBase::OnTreeSelectionChangedLayerTree ), NULL, this );
	this->Connect( m_menuItemDirTreeDelete->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainDialogBase::OnMenuSelectionDirTreeDelete ) );
	this->Connect( m_menuItemAddDir->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainDialogBase::OnMenuSelectionAddDir ) );
	m_treeCtrlExplorer->Connect( wxEVT_COMMAND_TREE_BEGIN_DRAG, wxTreeEventHandler( MainDialogBase::OnTreeBeginDragExplorer ), NULL, this );
	m_treeCtrlTrash->Connect( wxEVT_COMMAND_TREE_ITEM_RIGHT_CLICK, wxTreeEventHandler( MainDialogBase::OnItemRightClickPaperbag ), NULL, this );
	this->Connect( m_menuItemPaperbagRecover->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainDialogBase::OnMenuItemSelectionPaperbagRecover ) );
	this->Connect( m_menuItemPaperbagEmpty->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainDialogBase::OnMenuItemPaperbagEmpty ) );
	m_buttonNewLayer->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainDialogBase::OnButtonClickNewLayer ), NULL, this );
	m_button1->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainDialogBase::OnButtonClickSaveLayerElements ), NULL, this );
	m_treeCtrlLayerElements->Connect( wxEVT_COMMAND_TREE_END_LABEL_EDIT, wxTreeEventHandler( MainDialogBase::OnTreeEndLabelEditElements ), NULL, this );
	m_treeCtrlLayerElements->Connect( wxEVT_COMMAND_TREE_ITEM_ACTIVATED, wxTreeEventHandler( MainDialogBase::OnTreeItemActivatedLayerElements ), NULL, this );
	m_treeCtrlLayerElements->Connect( wxEVT_COMMAND_TREE_ITEM_RIGHT_CLICK, wxTreeEventHandler( MainDialogBase::OnTreeItemRightClickLayerElements ), NULL, this );
	m_treeCtrlLayerElements->Connect( wxEVT_COMMAND_TREE_SEL_CHANGED, wxTreeEventHandler( MainDialogBase::OnTreeSelectionChangedElementsTree ), NULL, this );
	this->Connect( m_menuItemAddText->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainDialogBase::OnMenuSeletionAddText ) );
	this->Connect( m_menuItemElementsDelete->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainDialogBase::OnMenuSelectionElementsDelete ) );
	m_checkBoxSettingsVisible->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MainDialogBase::OnCheckBoxVisible ), NULL, this );
	m_checkBoxSettingsNameVisible->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MainDialogBase::OnCheckBoxNameViz ), NULL, this );
	m_textCtrlSettingsName->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MainDialogBase::OnTextName ), NULL, this );
	m_textCtrlSetingsDescription->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MainDialogBase::OnTextDescription ), NULL, this );
	m_textCtrlLatitude->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MainDialogBase::OnTextLat ), NULL, this );
	m_textCtrlSettingsLongitude->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MainDialogBase::OnTextLon ), NULL, this );
	m_textCtrlDateTime->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MainDialogBase::OnTextDate ), NULL, this );
	m_textCtrlSettingsStart->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MainDialogBase::OnTextRouteStart ), NULL, this );
	m_textCtrlSettingsEnd->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MainDialogBase::OnTextRouteEnd ), NULL, this );
	m_textCtrlSettingsLinkName->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MainDialogBase::OnTextLink ), NULL, this );
	m_listCtrlSettingsIcons->Connect( wxEVT_COMMAND_LIST_COL_CLICK, wxListEventHandler( MainDialogBase::OnListColClickSettings ), NULL, this );
	m_listCtrlSettingsIcons->Connect( wxEVT_COMMAND_LIST_ITEM_ACTIVATED, wxListEventHandler( MainDialogBase::OnItemActivatedIconsList ), NULL, this );
	m_sdbSizerCancel->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainDialogBase::OnCancelClick ), NULL, this );
	m_sdbSizerOK->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainDialogBase::OnOKClick ), NULL, this );
}

MainDialogBase::~MainDialogBase()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( MainDialogBase::OnCloseDialog ) );
	this->Disconnect( wxEVT_INIT_DIALOG, wxInitDialogEventHandler( MainDialogBase::OnInit ) );
	m_bpButtonDir->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainDialogBase::OnButtonClickLayerDir ), NULL, this );
	m_notebook1->Disconnect( wxEVT_COMMAND_NOTEBOOK_PAGE_CHANGED, wxNotebookEventHandler( MainDialogBase::OnNotebook1PageChanged ), NULL, this );
	m_treeCtrlDir->Disconnect( wxEVT_LEFT_DOWN, wxMouseEventHandler( MainDialogBase::OnLeftDownDirTree ), NULL, this );
	m_treeCtrlDir->Disconnect( wxEVT_LEFT_UP, wxMouseEventHandler( MainDialogBase::OnLeftUpDirTree ), NULL, this );
	m_treeCtrlDir->Disconnect( wxEVT_COMMAND_TREE_BEGIN_DRAG, wxTreeEventHandler( MainDialogBase::OnTreeBeginnDragFile ), NULL, this );
	m_treeCtrlDir->Disconnect( wxEVT_COMMAND_TREE_END_LABEL_EDIT, wxTreeEventHandler( MainDialogBase::OnTreeEndLabelEditDirTree ), NULL, this );
	m_treeCtrlDir->Disconnect( wxEVT_COMMAND_TREE_ITEM_ACTIVATED, wxTreeEventHandler( MainDialogBase::OnTreeItemActivatedDirTree ), NULL, this );
	m_treeCtrlDir->Disconnect( wxEVT_COMMAND_TREE_ITEM_RIGHT_CLICK, wxTreeEventHandler( MainDialogBase::onTreeItemRightClickDirTree ), NULL, this );
	m_treeCtrlDir->Disconnect( wxEVT_COMMAND_TREE_SEL_CHANGED, wxTreeEventHandler( MainDialogBase::OnTreeSelectionChangedLayerTree ), NULL, this );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainDialogBase::OnMenuSelectionDirTreeDelete ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainDialogBase::OnMenuSelectionAddDir ) );
	m_treeCtrlExplorer->Disconnect( wxEVT_COMMAND_TREE_BEGIN_DRAG, wxTreeEventHandler( MainDialogBase::OnTreeBeginDragExplorer ), NULL, this );
	m_treeCtrlTrash->Disconnect( wxEVT_COMMAND_TREE_ITEM_RIGHT_CLICK, wxTreeEventHandler( MainDialogBase::OnItemRightClickPaperbag ), NULL, this );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainDialogBase::OnMenuItemSelectionPaperbagRecover ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainDialogBase::OnMenuItemPaperbagEmpty ) );
	m_buttonNewLayer->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainDialogBase::OnButtonClickNewLayer ), NULL, this );
	m_button1->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainDialogBase::OnButtonClickSaveLayerElements ), NULL, this );
	m_treeCtrlLayerElements->Disconnect( wxEVT_COMMAND_TREE_END_LABEL_EDIT, wxTreeEventHandler( MainDialogBase::OnTreeEndLabelEditElements ), NULL, this );
	m_treeCtrlLayerElements->Disconnect( wxEVT_COMMAND_TREE_ITEM_ACTIVATED, wxTreeEventHandler( MainDialogBase::OnTreeItemActivatedLayerElements ), NULL, this );
	m_treeCtrlLayerElements->Disconnect( wxEVT_COMMAND_TREE_ITEM_RIGHT_CLICK, wxTreeEventHandler( MainDialogBase::OnTreeItemRightClickLayerElements ), NULL, this );
	m_treeCtrlLayerElements->Disconnect( wxEVT_COMMAND_TREE_SEL_CHANGED, wxTreeEventHandler( MainDialogBase::OnTreeSelectionChangedElementsTree ), NULL, this );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainDialogBase::OnMenuSeletionAddText ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainDialogBase::OnMenuSelectionElementsDelete ) );
	m_checkBoxSettingsVisible->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MainDialogBase::OnCheckBoxVisible ), NULL, this );
	m_checkBoxSettingsNameVisible->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MainDialogBase::OnCheckBoxNameViz ), NULL, this );
	m_textCtrlSettingsName->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MainDialogBase::OnTextName ), NULL, this );
	m_textCtrlSetingsDescription->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MainDialogBase::OnTextDescription ), NULL, this );
	m_textCtrlLatitude->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MainDialogBase::OnTextLat ), NULL, this );
	m_textCtrlSettingsLongitude->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MainDialogBase::OnTextLon ), NULL, this );
	m_textCtrlDateTime->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MainDialogBase::OnTextDate ), NULL, this );
	m_textCtrlSettingsStart->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MainDialogBase::OnTextRouteStart ), NULL, this );
	m_textCtrlSettingsEnd->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MainDialogBase::OnTextRouteEnd ), NULL, this );
	m_textCtrlSettingsLinkName->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MainDialogBase::OnTextLink ), NULL, this );
	m_listCtrlSettingsIcons->Disconnect( wxEVT_COMMAND_LIST_COL_CLICK, wxListEventHandler( MainDialogBase::OnListColClickSettings ), NULL, this );
	m_listCtrlSettingsIcons->Disconnect( wxEVT_COMMAND_LIST_ITEM_ACTIVATED, wxListEventHandler( MainDialogBase::OnItemActivatedIconsList ), NULL, this );
	m_sdbSizerCancel->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainDialogBase::OnCancelClick ), NULL, this );
	m_sdbSizerOK->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainDialogBase::OnOKClick ), NULL, this );
	
}
