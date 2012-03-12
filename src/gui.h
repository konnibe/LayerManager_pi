///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jun 30 2011)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __GUI_H__
#define __GUI_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/intl.h>
#include <wx/string.h>
#include <wx/textctrl.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/bmpbuttn.h>
#include <wx/button.h>
#include <wx/sizer.h>
#include <wx/menu.h>
#include <wx/treectrl.h>
#include <wx/panel.h>
#include <wx/notebook.h>
#include <wx/stattext.h>
#include <wx/statbmp.h>
#include <wx/statline.h>
#include <wx/checkbox.h>
#include <wx/listctrl.h>
#include <wx/splitter.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class MainDialogBase
///////////////////////////////////////////////////////////////////////////////
class MainDialogBase : public wxDialog 
{
	private:
	
	protected:
		wxSplitterWindow* m_splitter1;
		wxPanel* m_panel61;
		wxNotebook* m_notebook1;
		wxPanel* m_panel2;
		wxMenu* m_menuRightClickDirTree;
		wxPanel* m_panel10;
		wxPanel* m_panel11;
		wxMenu* m_menuPaperbag;
		wxPanel* m_panel91;
		wxSplitterWindow* m_splitter3;
		wxPanel* m_panel8;
		wxButton* m_buttonNewLayer;
		wxButton* m_button1;
		wxMenu* m_menuRightClickLayerElements;
		wxPanel* m_panel9;
		wxPanel* m_panel5;
		wxSplitterWindow* m_splitter31;
		wxStaticText* m_staticText51;
		wxStaticLine* m_staticline2;
		wxStaticText* m_staticText1;
		wxStaticText* m_staticText2;
		wxStaticText* m_staticText5;
		wxStaticText* m_staticText3;
		wxStaticText* m_staticText8;
		wxStaticText* m_staticText9;
		wxStaticText* m_staticText10;
		wxStaticText* m_staticText11;
		wxStaticText* m_staticText12;
		wxPanel* m_panel111;
		wxStaticLine* m_staticline3;
		wxStdDialogButtonSizer* m_sdbSizer;
		wxButton* m_sdbSizerOK;
		wxButton* m_sdbSizerCancel;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnCloseDialog( wxCloseEvent& event ) { event.Skip(); }
		virtual void OnInit( wxInitDialogEvent& event ) { event.Skip(); }
		virtual void OnButtonClickLayerDir( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnNotebook1PageChanged( wxNotebookEvent& event ) { event.Skip(); }
		virtual void OnLeftDownDirTree( wxMouseEvent& event ) { event.Skip(); }
		virtual void OnLeftUpDirTree( wxMouseEvent& event ) { event.Skip(); }
		virtual void OnTreeBeginnDragFile( wxTreeEvent& event ) { event.Skip(); }
		virtual void OnTreeEndLabelEditDirTree( wxTreeEvent& event ) { event.Skip(); }
		virtual void OnTreeItemActivatedDirTree( wxTreeEvent& event ) { event.Skip(); }
		virtual void onTreeItemRightClickDirTree( wxTreeEvent& event ) { event.Skip(); }
		virtual void OnTreeSelectionChangedLayerTree( wxTreeEvent& event ) { event.Skip(); }
		virtual void OnMenuSelectionDirTreeDelete( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnMenuSelectionAddDir( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnTreeBeginDragExplorer( wxTreeEvent& event ) { event.Skip(); }
		virtual void OnItemRightClickPaperbag( wxTreeEvent& event ) { event.Skip(); }
		virtual void OnMenuItemSelectionPaperbagRecover( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnMenuItemPaperbagEmpty( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnButtonClickNewLayer( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnButtonClickSaveLayerElements( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnTreeEndLabelEditElements( wxTreeEvent& event ) { event.Skip(); }
		virtual void OnTreeItemActivatedLayerElements( wxTreeEvent& event ) { event.Skip(); }
		virtual void OnTreeItemRightClickLayerElements( wxTreeEvent& event ) { event.Skip(); }
		virtual void OnTreeSelectionChangedElementsTree( wxTreeEvent& event ) { event.Skip(); }
		virtual void OnMenuSeletionAddText( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnMenuSelectionElementsDelete( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnCheckBoxVisible( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnCheckBoxNameViz( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnTextName( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnTextDescription( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnTextLat( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnTextLon( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnTextDate( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnTextRouteStart( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnTextRouteEnd( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnTextLink( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnListColClickSettings( wxListEvent& event ) { event.Skip(); }
		virtual void OnItemActivatedIconsList( wxListEvent& event ) { event.Skip(); }
		virtual void OnCancelClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnOKClick( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		wxTextCtrl* m_textCtrlLabelDir;
		wxBitmapButton* m_bpButtonDir;
		wxTreeCtrl* m_treeCtrlDir;
		wxTreeCtrl* m_treeCtrlExplorer;
		wxTreeCtrl* m_treeCtrlTrash;
		wxTreeCtrl* m_treeCtrlLayerElements;
		wxMenuItem* m_menuItemAddText;
		wxNotebook* m_notebook2;
		wxPanel* m_panel101;
		wxStaticText* m_staticTextSettingsType;
		wxStaticBitmap* m_bitmap1;
		wxStaticText* m_staticText13;
		wxCheckBox* m_checkBoxSettingsVisible;
		wxCheckBox* m_checkBoxSettingsNameVisible;
		wxTextCtrl* m_textCtrlSettingsName;
		wxTextCtrl* m_textCtrlSetingsDescription;
		wxTextCtrl* m_textCtrlLatitude;
		wxTextCtrl* m_textCtrlSettingsLongitude;
		wxTextCtrl* m_textCtrlDateTime;
		wxTextCtrl* m_textCtrlSettingsStart;
		wxTextCtrl* m_textCtrlSettingsEnd;
		wxTextCtrl* m_textCtrlSettingsLinkName;
		wxStaticText* m_staticTextSettingsLinksFile;
		wxListCtrl* m_listCtrlSettingsIcons;
		wxPanel* m_panel6;
		wxTextCtrl* m_textCtrlEditText;
		
		MainDialogBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("OpenCPN  - LayerManager"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 730,524 ), long style = wxCLOSE_BOX|wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~MainDialogBase();
		
		void m_splitter1OnIdle( wxIdleEvent& )
		{
			m_splitter1->SetSashPosition( 240 );
			m_splitter1->Disconnect( wxEVT_IDLE, wxIdleEventHandler( MainDialogBase::m_splitter1OnIdle ), NULL, this );
		}
		
		void m_splitter3OnIdle( wxIdleEvent& )
		{
			m_splitter3->SetSashPosition( 0 );
			m_splitter3->Disconnect( wxEVT_IDLE, wxIdleEventHandler( MainDialogBase::m_splitter3OnIdle ), NULL, this );
		}
	
};

#endif //__GUI_H__
