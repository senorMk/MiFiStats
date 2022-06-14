//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: AppFrameBase.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#ifndef _DESKTOP_HUASTATS_APPFRAMEBASE_BASE_CLASSES_H
#define _DESKTOP_HUASTATS_APPFRAMEBASE_BASE_CLASSES_H

#include <wx/settings.h>
#include <wx/xrc/xmlres.h>
#include <wx/xrc/xh_bmp.h>
#include <wx/dialog.h>
#include <wx/iconbndl.h>
#include <wx/artprov.h>
#include <wx/sizer.h>
#include <wx/textctrl.h>
#include <wx/statline.h>
#include <wx/timer.h>
#if wxVERSION_NUMBER >= 2900
#include <wx/persist.h>
#include <wx/persist/toplevel.h>
#include <wx/persist/bookctrl.h>
#include <wx/persist/treebook.h>
#endif

#ifdef WXC_FROM_DIP
#undef WXC_FROM_DIP
#endif
#if wxVERSION_NUMBER >= 3100
#define WXC_FROM_DIP(x) wxWindow::FromDIP(x, NULL)
#else
#define WXC_FROM_DIP(x) x
#endif


class AppFrameBase : public wxDialog
{
protected:
    wxBoxSizer* main_sizer;
    wxBoxSizer* CurrentSession;
    wxTextCtrl* CCT;
    wxTextCtrl* CurrentConnectTime;
    wxStaticLine* m_staticLine156;
    wxBoxSizer* CurrentUp;
    wxTextCtrl* CU;
    wxTextCtrl* CurrentUpload;
    wxStaticLine* m_staticLine1561;
    wxBoxSizer* CurrentDown;
    wxTextCtrl* CD;
    wxTextCtrl* CurrentDownload;
    wxStaticLine* m_staticLine15612;
    wxBoxSizer* TotalUp;
    wxTextCtrl* TU;
    wxTextCtrl* TotalUpload;
    wxStaticLine* m_staticLine156123;
    wxBoxSizer* TotalDown;
    wxTextCtrl* TD;
    wxTextCtrl* TotalDownload;
    wxStaticLine* m_staticLine1561234;
    wxBoxSizer* TotalUpDown;
    wxTextCtrl* TUD;
    wxTextCtrl* TotalUploadDownload;
    wxTimer* m_pBackgroundTimer;

protected:
    virtual void OnClose(wxCloseEvent& event) { event.Skip(); }
    virtual void OnBackgroundTimer(wxTimerEvent& event) { event.Skip(); }

public:
    wxTextCtrl* GetCCT() { return CCT; }
    wxTextCtrl* GetCurrentConnectTime() { return CurrentConnectTime; }
    wxStaticLine* GetStaticLine156() { return m_staticLine156; }
    wxTextCtrl* GetCU() { return CU; }
    wxTextCtrl* GetCurrentUpload() { return CurrentUpload; }
    wxStaticLine* GetStaticLine1561() { return m_staticLine1561; }
    wxTextCtrl* GetCD() { return CD; }
    wxTextCtrl* GetCurrentDownload() { return CurrentDownload; }
    wxStaticLine* GetStaticLine15612() { return m_staticLine15612; }
    wxTextCtrl* GetTU() { return TU; }
    wxTextCtrl* GetTotalUpload() { return TotalUpload; }
    wxStaticLine* GetStaticLine156123() { return m_staticLine156123; }
    wxTextCtrl* GetTD() { return TD; }
    wxTextCtrl* GetTotalDownload() { return TotalDownload; }
    wxStaticLine* GetStaticLine1561234() { return m_staticLine1561234; }
    wxTextCtrl* GetTUD() { return TUD; }
    wxTextCtrl* GetTotalUploadDownload() { return TotalUploadDownload; }
    wxTimer* GetPBackgroundTimer() { return m_pBackgroundTimer; }
    AppFrameBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("MiFiStats"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxDEFAULT_DIALOG_STYLE|wxMINIMIZE_BOX);
    virtual ~AppFrameBase();
};

#endif
