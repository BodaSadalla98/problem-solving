/***************************************************************
 * Name:      Inverted2Main.h
 * Purpose:   Defines Application Frame
 * Author:    Boda ()
 * Created:   2020-04-20
 * Copyright: Boda ()
 * License:
 **************************************************************/

#ifndef INVERTED2MAIN_H
#define INVERTED2MAIN_H



#include "Inverted2App.h"


#include "GUIFrame.h"

class Inverted2Frame: public GUIFrame
{
    public:
        Inverted2Frame(wxFrame *frame);
        ~Inverted2Frame();
    private:
        virtual void OnClose(wxCloseEvent& event);
        virtual void OnQuit(wxCommandEvent& event);
        virtual void OnAbout(wxCommandEvent& event);
};

#endif // INVERTED2MAIN_H
