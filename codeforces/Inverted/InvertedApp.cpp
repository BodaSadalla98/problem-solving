/***************************************************************
 * Name:      InvertedApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Boda ()
 * Created:   2020-04-20
 * Copyright: Boda ()
 * License:
 **************************************************************/

#include "InvertedApp.h"

//(*AppHeaders
#include "InvertedMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(InvertedApp);

bool InvertedApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	InvertedFrame* Frame = new InvertedFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
