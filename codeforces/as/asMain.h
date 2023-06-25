/***************************************************************
 * Name:      asMain.h
 * Purpose:   Defines Application Frame
 * Author:    c ()
 * Created:   2020-04-17
 * Copyright: c ()
 * License:
 **************************************************************/

#ifndef ASMAIN_H
#define ASMAIN_H

#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif

#include "asApp.h"

class asFrame: public wxFrame
{
    public:
        asFrame(wxFrame *frame, const wxString& title);
        ~asFrame();
    private:
        enum
        {
            idMenuQuit = 1000,
            idMenuAbout
        };
        void OnClose(wxCloseEvent& event);
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        DECLARE_EVENT_TABLE()
};


#endif // ASMAIN_H
