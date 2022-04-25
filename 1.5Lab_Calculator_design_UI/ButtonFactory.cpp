#include "ButtonFactory.h"

wxBEGIN_EVENT_TABLE(ButtonFactory, wxFrame)

EVT_BUTTON(100, clicker)
EVT_BUTTON(101, clicker)
EVT_BUTTON(102, clicker)
EVT_BUTTON(103, clicker)
EVT_BUTTON(104, clicker)
EVT_BUTTON(105, clicker)
EVT_BUTTON(106, clicker)
EVT_BUTTON(107, clicker)
EVT_BUTTON(108, clicker)
EVT_BUTTON(109, clicker)
EVT_BUTTON(110, clicker)
EVT_BUTTON(111, clicker)
EVT_BUTTON(112, clicker)
EVT_BUTTON(113, clicker)
EVT_BUTTON(114, clicker)
EVT_BUTTON(115, clicker)
EVT_BUTTON(116, clicker)


wxEND_EVENT_TABLE()


wxButton* ButtonFactory::CreatezeroButton()
{
    zero = new wxButton(this, 100, "0", wxPoint(150, 300), wxSize(30, 30));
    return zero;
}

wxButton* ButtonFactory::CreateoneButton()
{
    one = new wxButton(this, 101, "1", wxPoint(120, 270), wxSize(30, 30));
    return one;
}

wxButton* ButtonFactory::CreatetwoButton()
{
two = new wxButton(this, 102, "2", wxPoint(150, 270), wxSize(30, 30));
    return two;
}

wxButton* ButtonFactory::CreatethreeButton()
{
three = new wxButton(this, 103, "3", wxPoint(180, 270), wxSize(30, 30));
    return three;
}

wxButton* ButtonFactory::CreatefourButton()
{
four = new wxButton(this, 104, "4", wxPoint(120, 240), wxSize(30, 30));
    return four;
}

wxButton* ButtonFactory::CreatefiveButton()
{
five = new wxButton(this, 105, "5", wxPoint(150, 240), wxSize(30, 30));
    return five;
}

wxButton* ButtonFactory::CreatesixButton()
{
six = new wxButton(this, 106, "6", wxPoint(180, 240), wxSize(30, 30));
    return six;
}

wxButton* ButtonFactory::CreatesevenButton()
{
seven = new wxButton(this, 107, "7", wxPoint(120, 210), wxSize(30, 30));
    return seven;
}

wxButton* ButtonFactory::CreateeightButton()
{
eight = new wxButton(this, 108, "8", wxPoint(150, 210), wxSize(30, 30));
    return eight;
}

wxButton* ButtonFactory::CreatenineButton()
{
nine = new wxButton(this, 109, "9", wxPoint(180, 210), wxSize(30, 30));
    return nine;
}

wxButton* ButtonFactory::CreateaddButton()
{
add = new wxButton(this, 110, "+", wxPoint(30, 90), wxSize(30, 30));
    return add;
}

wxButton* ButtonFactory::CreatesubtractButton()
{
subtract = new wxButton(this, 111, "-", wxPoint(60, 90), wxSize(30, 30));
    return subtract;
}

wxButton* ButtonFactory::CreatemultiplyButton()
{
multiply = new wxButton(this, 112, "x", wxPoint(120, 90), wxSize(30, 30));
    return multiply;
}

wxButton* ButtonFactory::CreatedivideButton()
{
divide = new wxButton(this, 113, "÷", wxPoint(90, 90), wxSize(30, 30));
    return divide;
}

wxButton* ButtonFactory::CreateacButton()
{
ac = new wxButton(this, 114, "AC", wxPoint(0, 90), wxSize(30, 30));
    return ac;
}

wxButton* ButtonFactory::CreateequalButton()
{
equal = new wxButton(this, 115, "=", wxPoint(150, 90), wxSize(30, 30));
    return equal;
}

wxTextCtrl* ButtonFactory::CreatechoiceButton()
{
    choice = new wxTextCtrl(this, 116, "", wxPoint(0, 0), wxSize(400, 90));
    return choice;
}

void ButtonFactory::clicker(wxCommandEvent& evt)
{
	if (evt.GetId() == 100)
	{
		choice->SetValue("0");
	}
	else if (evt.GetId() == 101)
	{
		choice->SetValue("1");
	}
	else if (evt.GetId() == 102)
	{
		choice->SetValue("2");
	}
	else if (evt.GetId() == 103)
	{
		choice->SetValue("3");
	}
	else if (evt.GetId() == 104)
	{
		choice->SetValue("4");
	}
	else if (evt.GetId() == 105)
	{
		choice->SetValue("5");
	}
	else if (evt.GetId() == 106)
	{
		choice->SetValue("6");
	}
	else if (evt.GetId() == 107)
	{
		choice->SetValue("7");
	}
	else if (evt.GetId() == 108)
	{
		choice->SetValue("8");
	}
	else if (evt.GetId() == 109)
	{
		choice->SetValue("9");
	}
	else if (evt.GetId() == 110)
	{
		choice->SetValue("+");
	}
	else if (evt.GetId() == 111)
	{
		choice->SetValue("-");
	}
	else if (evt.GetId() == 112)
	{
		choice->SetValue("x");
	}
	else if (evt.GetId() == 113)
	{
		choice->SetValue("÷");
	}
	else if (evt.GetId() == 114)
	{
		choice->SetValue("");
	}
	else if (evt.GetId() == 115)
	{
		choice->SetValue("=");
	}



	evt.Skip();
}
