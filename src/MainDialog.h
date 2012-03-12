#ifndef __MainDialog__
#define __MainDialog__

#include "gui.h"
#include "tinyxml/tinyxml.h"
#include <wx/treebase.h>
#include <wx/imaglist.h>

//// end generated include

/** Implementing MainDialogBase */

class myTreeItemElements;
class myTreeItemData;
class LayerManager_pi;

class MainDialog : public MainDialogBase
{
	protected:
		// protected event handlers
		void OnCloseDialog( wxCloseEvent& event );
		void OnOKClick( wxCommandEvent& event );
		void OnCancelClick( wxCommandEvent& event );
		void OnButtonClickLayerDir( wxCommandEvent& event );
		void OnTreeSelectionChangedLayerTree( wxTreeEvent& event );
		void OnTreeSelectionChangedElementsTree( wxTreeEvent& event );
		void OnTreeItemActivatedLayerElements( wxTreeEvent& event );
		void OnButtonClickSaveLayerElements( wxCommandEvent& event );
		void OnTreeItemRightClickLayerElements( wxTreeEvent& event );
		void onTreeItemRightClickDirTree( wxTreeEvent& event );	
		void OnMenuSelectionElementsDelete( wxCommandEvent& event );
		void OnMenuSelectionDirTreeDelete( wxCommandEvent& event );
		void OnTreeBeginnDragFile( wxTreeEvent& event );
		void OnTreeBeginDragExplorer( wxTreeEvent& event );
		void OnMenuSeletionAddText( wxCommandEvent& event );
		void OnButtonClickNewLayer( wxCommandEvent& event );		
		void OnTreeEndLabelEditElements( wxTreeEvent& event );	
		void OnTreeEndLabelEditDirTree( wxTreeEvent& event );
		void OnTreeItemActivatedDirTree( wxTreeEvent& event );	
		void OnNotebook1PageChanged( wxNotebookEvent& event );
		void OnItemRightClickPaperbag( wxTreeEvent& event );
		void OnMenuItemSelectionPaperbagRecover( wxCommandEvent& event );
		void OnMenuItemPaperbagEmpty( wxCommandEvent& event );
		void OnItemActivatedIconsList( wxListEvent& event );
		void OnMenuSelectionAddDir( wxCommandEvent& event );
		void OnListColClickSettings( wxListEvent& event );
		void OnInit( wxInitDialogEvent& event );
/////////////// Settings ////////////////
		void OnCheckBoxVisible( wxCommandEvent& event );
		void OnCheckBoxNameViz( wxCommandEvent& event );
		void OnTextName( wxCommandEvent& event );
		void OnTextDescription( wxCommandEvent& event );
		void OnTextLat( wxCommandEvent& event );
		void OnTextLon( wxCommandEvent& event );
		void OnTextDate( wxCommandEvent& event );
		void OnTextRouteStart( wxCommandEvent& event );
		void OnTextRouteEnd( wxCommandEvent& event );
		void OnTextLink( wxCommandEvent& event );

	public:
		/** Constructor */
		MainDialog( wxWindow* parent, LayerManager_pi* p );
		~MainDialog();
	//// end generated class members

	enum head {ROOT, ROUTE, ROUTEPOINT, TRACK, TRACKSEGMENT, TRACKPOINT, WAYPOINT, LINKS };
	enum indentifier { DIR, FILE };

		
		void appendXMLElement(TiXmlNode* node, wxTreeCtrl* tree, wxTreeItemId root, unsigned int indent = 0);
		void fillDirTree(wxTreeCtrl * tree,wxString str, bool tilde);

		myTreeItemElements* getElementsItemData(wxTreeItemId id);	
		myTreeItemData* getDirTreeItemData(wxTreeItemId id);		

		bool modified;
		bool textModified;
		
		wxString textPath;
		wxString stdPath;
		wxString pHome_Locn;
		wxString pExplorer_Locn;

		wxImageList*	imageList;
		wxArrayString*	imageDescription;
		wxArrayString*	imageName;

		wxTreeItemId 		selectionDirTree, selElementsTree;
		wxTreeItemId		oldDirTreeItem;		
		
private:	
		void createImageList();
		wxImage makeImage(const char *icon[]);
		void fillDirRecursive(wxTreeCtrl * tree,wxTreeItemId root, wxString str, bool tilde);
		wxTreeItemId findTreeItem(wxTreeCtrl* pTreeCtrl, const wxTreeItemId& root, const wxString& text, bool bCaseSensitive, bool bExactMatch);
		void writeXml();
		wxTreeItemId recursiveWrite(wxTreeItemId id,TiXmlElement *elem,TiXmlElement *root);
		void addElement(TiXmlElement *root, const char* key, const char* label);
		void checkLinks(TiXmlElement *elem, wxTreeItemId item);
		void setSettingsPage(myTreeItemElements* elem);
		int getImageName(wxString str);
		void showHideIconsList();
		void setSettingsReadonly(int head);

		LayerManager_pi* 	parent;
		int 			sashPosition;
		bool 			showIconsList;
};

class myTreeItemData : public wxTreeItemData
{
public:
	myTreeItemData(wxString filepath, int i)
	{
		ind = i;
		path = filepath;
	}
	
	int ind;
	wxString path;
};

class myTreeItemElements : public wxTreeItemData
{
public:
	myTreeItemElements() { name = _T(""); }

	int 	 head;
	wxString lat;
	wxString lon;
	wxString dateTime;
	wxString name;
	wxString desc;
	wxString sym;
	wxString type;
	wxString viz;
	wxString vizName;
	wxString guid;
	wxString start;
	wxString end;
	wxString auto_name;
	wxString shared;
	
	wxString file;
	wxString text;
};

#endif // __MainDialog__
