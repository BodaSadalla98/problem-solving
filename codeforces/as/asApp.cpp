/***************************************************************
 * Name:      asApp.cpp
 * Purpose:   Code for Application Class
 * Author:    c ()
 * Created:   2020-04-17
 * Copyright: c ()
 * License:
 **************************************************************/

#ifdef WX_PRECOMP
#include "wx_pch.h"
#endif

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#include "asApp.h"
#include "asMain.h"

IMPLEMENT_APP(asApp);

bool asApp::OnInit()
{
    asFrame* frame = new asFrame(0L, _("wxWidgets Application Template"));
    
    frame->Show();
    
    return true;
}
