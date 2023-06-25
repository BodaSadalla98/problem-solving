/***************************************************************
 * Name:      Inverted2App.cpp
 * Purpose:   Code for Application Class
 * Author:    Boda ()
 * Created:   2020-04-20
 * Copyright: Boda ()
 * License:
 **************************************************************/

#ifdef WX_PRECOMP
#include "wx_pch.h"
#endif

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#include "Inverted2App.h"
#include "Inverted2Main.h"

IMPLEMENT_APP(Inverted2App);

bool Inverted2App::OnInit()
{
    Inverted2Frame* frame = new Inverted2Frame(0L);
    
    frame->Show();
    
    return true;
}
