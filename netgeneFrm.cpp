///-----------------------------------------------------------------
///
/// @file      netgeneFrm.cpp
/// @author    Yury
/// Created:   09.12.2012 17:33:58
/// @section   DESCRIPTION
///            netgeneFrm class implementation
///
///------------------------------------------------------------------

#include "netgeneFrm.h"

//Do not add custom headers between
//Header Include Start and Header Include End
//wxDev-C++ designer will remove them
////Header Include Start
////Header Include End

//----------------------------------------------------------------------------
// netgeneFrm
//----------------------------------------------------------------------------
//Add Custom Events only in the appropriate block.
//Code added in other places will be removed by wxDev-C++
////Event Table Start
BEGIN_EVENT_TABLE(netgeneFrm,wxFrame)
	////Manual Code Start
	////Manual Code End
	
	EVT_CLOSE(netgeneFrm::OnClose)
	
	EVT_TEXT(ID_WXMEMO1,netgeneFrm::WxMemo1Updated)
	EVT_BUTTON(ID_WXBUTTON1,netgeneFrm::WxButton1Click)
END_EVENT_TABLE()
////Event Table End

netgeneFrm::netgeneFrm(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &position, const wxSize& size, long style)
: wxFrame(parent, id, title, position, size, style)
{
	CreateGUIControls();
}

netgeneFrm::~netgeneFrm()
{
}

void netgeneFrm::CreateGUIControls()
{
	//Do not add custom code between
	//GUI Items Creation Start and GUI Items Creation End
	//wxDev-C++ designer will remove them.
	//Add the custom code before or after the blocks
	////GUI Items Creation Start

	WxMemo1 = new wxTextCtrl(this, ID_WXMEMO1, wxEmptyString, wxPoint(-3, -3), wxSize(877, 418), wxTE_MULTILINE, wxDefaultValidator, _("WxMemo1"));
	WxMemo1->SetMaxLength(0);
	WxMemo1->AppendText(_("WxMemo1"));
	WxMemo1->SetFocus();
	WxMemo1->SetInsertionPointEnd();

	WxButton1 = new wxButton(this, ID_WXBUTTON1, _("WxButton1"), wxPoint(649, 421), wxSize(197, 66), 0, wxDefaultValidator, _("WxButton1"));

	SetTitle(_("netgene"));
	SetIcon(wxNullIcon);
	SetSize(57,8,902,545);
	Center();
	
	////GUI Items Creation End
}

void netgeneFrm::OnClose(wxCloseEvent& event)
{
	Destroy();
}

/*
 * WxButton1Click
 */
void netgeneFrm::WxButton1Click(wxCommandEvent& event)
{
    WxButton1->SetLabel(_("Привет") );
	// insert your code here
}

/*
 * WxMemo1Updated
 */
void netgeneFrm::WxMemo1Updated(wxCommandEvent& event)
{
    //WxButton1->SetLabel(_("Обновление") );
	// insert your code here
}
