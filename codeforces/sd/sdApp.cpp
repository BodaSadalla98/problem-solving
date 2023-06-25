/***************************************************************
 * Name:      sdApp.cpp
 * Purpose:   Code for Application Class
 * Author:     ()
 * Created:   2020-04-19
 * Copyright:  ()
 * License:
 **************************************************************/

#ifdef WX_PRECOMP
#include "wx_pch.h"
#endif

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#include "sdApp.h"
#include "sdMain.h"

IMPLEMENT_APP(sdApp);

bool sdApp::OnInit()
{
    sdFrame* frame = new sdFrame(0L, _("wxWidgets Application Template"));
    
    frame->Show();
    
    return true;
}
