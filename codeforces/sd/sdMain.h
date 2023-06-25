/***************************************************************
 * Name:      sdMain.h
 * Purpose:   Defines Application Frame
 * Author:     ()
 * Created:   2020-04-19
 * Copyright:  ()
 * License:
 **************************************************************/

#ifndef SDMAIN_H
#define SDMAIN_H

#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif

#include "sdApp.h"

class sdFrame: public wxFrame
{
    public:
        sdFrame(wxFrame *frame, const wxString& title);
        ~sdFrame();

};


#endif // SDMAIN_H
