/******************************************************************************
 * $Id: LayerManager_pi.cpp,v 1.8 2010/06/21 01:54:37 bdbcat Exp $
 *
 * Project:  OpenCPN
 * Purpose:  DEMO Plugin
 * Author:   David Register
 *
 ***************************************************************************
 *   Copyright (C) 2010 by David S. Register   *
 *   bdbcat@yahoo.com   *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************
 */


#include "wx/wxprec.h"

#ifndef  WX_PRECOMP
  #include "wx/wx.h"
#endif //precompiled headers

#include <wx/aui/aui.h>

#include "LayerManager_pi.h"
#include "icons.h"

// the class factories, used to create and destroy instances of the PlugIn

extern "C" DECL_EXP opencpn_plugin* create_pi(void *ppimgr)
{
    return new LayerManager_pi(ppimgr);
}

extern "C" DECL_EXP void destroy_pi(opencpn_plugin* p)
{
    delete p;
}





//---------------------------------------------------------------------------------------------------------
//
//    Demo PlugIn Implementation
//
//---------------------------------------------------------------------------------------------------------



//---------------------------------------------------------------------------------------------------------
//
//          PlugIn initialization and de-init
//
//---------------------------------------------------------------------------------------------------------

int LayerManager_pi::Init(void)
{
//      printf("LayerManager_pi Init()\n");
      initialize_images();
      m_pLayerManagerWindow = NULL;

      // Get a pointer to the opencpn display canvas, to use as a parent for windows created
      m_parent_window = GetOCPNCanvasWindow();

      // Create the Context Menu Items

      //    In order to avoid an ASSERT on msw debug builds,
      //    we need to create a dummy menu to act as a surrogate parent of the created MenuItems
      //    The Items will be re-parented when added to the real context meenu
      wxMenu dummy_menu;
m_bLOGShowIcon = true;
	if(m_bLOGShowIcon)
            m_leftclick_tool_id  = InsertPlugInTool(_T(""), _img_layermanager, _img_layermanager, wxITEM_NORMAL,
                  _("LayerManager"), _T(""), NULL,
                   LAYERMANAGER_TOOL_POSITION, 0, this);
/*
      wxMenuItem *pmi = new wxMenuItem(&dummy_menu, -1, _("Show PlugIn DemoWindow"));
      m_show_id = AddCanvasContextMenuItem(pmi, this );
      SetCanvasContextMenuItemViz(m_show_id, true);

      wxMenuItem *pmih = new wxMenuItem(&dummy_menu, -1, _("Hide PlugIn DemoWindow"));
      m_hide_id = AddCanvasContextMenuItem(pmih, this );
      SetCanvasContextMenuItemViz(m_hide_id, false);
*/
  //    m_pLayerManagerWindow = new MainDialog(m_parent_window);
	//  m_pLayerManagerWindow->Show();
/*
        m_AUImgr = GetFrameAuiManager();
        m_AUImgr->AddPane(m_pLayerManagerWindow);
        m_AUImgr->GetPane(m_pLayerManagerWindow).Name(_T("Demo Window Name"));

        m_AUImgr->GetPane(m_pLayerManagerWindow).Float();
        m_AUImgr->GetPane(m_pLayerManagerWindow).FloatingPosition(300,30);

        m_AUImgr->GetPane(m_pLayerManagerWindow).Caption(_T("AUI Managed Demo Window"));
        m_AUImgr->GetPane(m_pLayerManagerWindow).CaptionVisible(true);
        m_AUImgr->GetPane(m_pLayerManagerWindow).GripperTop(true);
        m_AUImgr->GetPane(m_pLayerManagerWindow).CloseButton(true);
        m_AUImgr->GetPane(m_pLayerManagerWindow).Show(false);
        m_AUImgr->Update();
*/
      return (
			WANTS_TOOLBAR_CALLBACK    |
			INSTALLS_CONTEXTMENU_ITEMS     
          // WANTS_NMEA_SENTENCES           
         //  USES_AUI_MANAGER
            );
}

bool LayerManager_pi::DeInit(void)
{
//      printf("LayerManager_pi DeInit()\n");
//      m_AUImgr->DetachPane(m_pLayerManagerWindow);

      if(m_pLayerManagerWindow)
      {
          //  m_pLayerManagerWindow->Close();
            m_pLayerManagerWindow->Destroy();
			m_pLayerManagerWindow = NULL;
      }

      
      return true;
}

int LayerManager_pi::GetAPIVersionMajor()
{
      return MY_API_VERSION_MAJOR;
}

int LayerManager_pi::GetAPIVersionMinor()
{
      return MY_API_VERSION_MINOR;
}

int LayerManager_pi::GetPlugInVersionMajor()
{
      return PLUGIN_VERSION_MAJOR;
}

int LayerManager_pi::GetPlugInVersionMinor()
{
      return PLUGIN_VERSION_MINOR;
}

wxString LayerManager_pi::GetCommonName()
{
      return _("LayerManager");
}

wxString LayerManager_pi::GetShortDescription()
{
      return _("LayerManager PlugIn for OpenCPN");
}

wxString LayerManager_pi::GetLongDescription()
{
      return _("LayerManager PlugIn for OpenCPN\n\
");

}

void LayerManager_pi::SetNMEASentence(wxString &sentence)
{
//      printf("LayerManager_pi::SetNMEASentence\n");
      /*if(m_pLayerManagerWindow)
      {
            m_pLayerManagerWindow->SetSentence(sentence);
      }
	  */
}


void LayerManager_pi::OnToolbarToolCallback(int id)
{
 //     wxLogMessage(_T("LayerManager_pi OnContextMenuCallBack()"));
 //    ::wxBell();

      //  Note carefully that this is a "reference to a wxAuiPaneInfo classs instance"
      //  Copy constructor (i.e. wxAuiPaneInfo pane = m_AUImgr->GetPane(m_pdemo_window);) will not work

/*      wxAuiPaneInfo &pane = m_AUImgr->GetPane(m_pdemo_window);
      if(!pane.IsOk())
            return;

      if(!pane.IsShown())
      {
//            printf("show\n");
            SetCanvasContextMenuItemViz(m_hide_id, true);
            SetCanvasContextMenuItemViz(m_show_id, false);

            pane.Show(true);
            m_AUImgr->Update();

      }
      else
      {
//            printf("hide\n");
            SetCanvasContextMenuItemViz(m_hide_id, false);
            SetCanvasContextMenuItemViz(m_show_id, true);

            pane.Show(false);
            m_AUImgr->Update();
      }

*/
/*      if(NULL == m_pdemo_window)
      {
            m_pdemo_window = new MainDialog(m_parent_window);
			m_pdemo_window->Show();
            SetCanvasContextMenuItemViz(m_hide_id, true);
            SetCanvasContextMenuItemViz(m_show_id, false);
      }
      else
      {
            m_pdemo_window->Close();
            m_pdemo_window->Destroy();
            m_pdemo_window = NULL;

            SetCanvasContextMenuItemViz(m_hide_id, false);
            SetCanvasContextMenuItemViz(m_show_id, true);
      }     

*/
	if(NULL == m_pLayerManagerWindow)
	{
		m_pLayerManagerWindow = new MainDialog(this->m_parent_window,this);
//		m_pLayerManagerWindow->init();
//		m_pLayerManagerWindow->SetPosition(wxPoint(-1,this->m_parent_window->GetParent()->GetPosition().y+80));
	}
	else
	//	m_pLayerManagerWindow->Centre();
	{
		if(m_pLayerManagerWindow->IsIconized()) m_pLayerManagerWindow->Iconize(false);
		//m_pLayerManagerWindow->SetPosition(wxPoint(-1,this->m_parent_window->GetParent()->GetPosition().y+80));
	}
	
	m_pLayerManagerWindow->Show(); 
	m_pLayerManagerWindow->SetFocus();
}

void LayerManager_pi::SetDefaults(void)
{
      // If the config somehow says NOT to show the icon, override it so the user gets good feedback
      if(!m_bLOGShowIcon)
      {
            m_bLOGShowIcon = true;

            m_leftclick_tool_id  = InsertPlugInTool(_T(""), _img_layermanager, _img_layermanager, wxITEM_NORMAL,
                  _("Logbook"), _T(""), NULL,
                   LAYERMANAGER_TOOL_POSITION, 0, this);
				   
      }
}

void LayerManager_pi::UpdateAuiStatus(void)
{
      //    This method is called after the PlugIn is initialized
      //    and the frame has done its initial layout, possibly from a saved wxAuiManager "Perspective"
      //    It is a chance for the PlugIn to syncronize itself internally with the state of any Panes that
      //    were added to the frame in the PlugIn ctor.

      //    We use this callback here to keep the context menu selection in sync with the window state

 /* 
      wxAuiPaneInfo &pane = m_AUImgr->GetPane(m_pdemo_window);
      if(!pane.IsOk())
            return;

      printf("update %d\n",pane.IsShown());
*/
//      SetCanvasContextMenuItemViz(m_hide_id, pane.IsShown());
//      SetCanvasContextMenuItemViz(m_show_id, !pane.IsShown());

}

