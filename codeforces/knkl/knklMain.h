/***************************************************************
 * Name:      knklMain.h
 * Purpose:   Defines Application Frame
 * Author:    Boda ()
 * Created:   2020-04-20
 * Copyright: Boda ()
 * License:
 **************************************************************/

#ifndef KNKLMAIN_H
#define KNKLMAIN_H

//(*Headers(knklFrame)
#include <wx/menu.h>
#include <wx/statusbr.h>
#include <wx/frame.h>
//*)

class knklFrame: public wxFrame
{
    public:

        knklFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~knklFrame();

    private:

        //(*Handlers(knklFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        //*)

        //(*Identifiers(knklFrame)
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(knklFrame)
        wxStatusBar* StatusBar1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // KNKLMAIN_H
    