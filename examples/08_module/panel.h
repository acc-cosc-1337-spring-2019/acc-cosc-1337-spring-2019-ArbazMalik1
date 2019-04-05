#ifndef PANEL_H
#define PANEL_H
#include<wx/wx.h>
#include "checking_account.h"

class Panel : public wxPanel
{
public:
	Panel(wxWindow* parent);

private:
	void on_submit_button_click(wxCommandEvent  event);
	wxBoxSizer* get_box_sizer();
	wxStaticTest* balance_label();
	wxTextCtrl* transaction_text;
	wxButton* submit_button;
	wxStaticText* balance_test;
	wxRadioBox* trans_type_radio;
	std::unique_ptr<BankAccount> account;
};

#endif // !PANEL_H
