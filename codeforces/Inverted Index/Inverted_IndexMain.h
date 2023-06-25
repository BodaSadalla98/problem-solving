#ifndef MAIN_H
#define MAIN_H

#include "wx/wx.h"
#include "Inverted_IndexApp.h"
class mainFrame : public wxFrame
{
	public:
	mainFrame( wxFrame *frame, const wxString& title);
	~mainFrame();

	wxButton * button1 = nullptr;
	wxTextCtrl* textbox1 = nullptr;
	wxListBox * listbox1 = nullptr;


};

#endif
