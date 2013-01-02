//---------------------------------------------------------------------------
//
// Name:        netgeneApp.h
// Author:      Yury
// Created:     09.12.2012 17:33:58
// Description: 
//
//---------------------------------------------------------------------------

#ifndef __NETGENEFRMApp_h__
#define __NETGENEFRMApp_h__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
#else
	#include <wx/wxprec.h>
#endif

class netgeneFrmApp : public wxApp
{
	public:
		bool OnInit();
		int OnExit();
};

#endif
