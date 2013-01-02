//---------------------------------------------------------------------------
//
// Name:        netgeneApp.cpp
// Author:      Yury
// Created:     09.12.2012 17:33:58
// Description: 
//
//---------------------------------------------------------------------------

#include "netgeneApp.h"
#include "netgeneFrm.h"

IMPLEMENT_APP(netgeneFrmApp)

bool netgeneFrmApp::OnInit()
{
    netgeneFrm* frame = new netgeneFrm(NULL);
    SetTopWindow(frame);
    frame->Show();
    return true;
}
 
int netgeneFrmApp::OnExit()
{
	return 0;
}
