/***************************************************************
 * Name:      knklApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Boda ()
 * Created:   2020-04-20
 * Copyright: Boda ()
 * License:
 **************************************************************/

#include "knklApp.h"

//(*AppHeaders
#include "knklMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(knklApp);

bool knklApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	knklFrame* Frame = new knklFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;


}
