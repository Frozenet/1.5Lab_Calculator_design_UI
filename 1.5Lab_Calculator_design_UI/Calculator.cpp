#include "Calculator.h"
#include "ButtonFactory.h"
#include "CalculatorProcessor.h"
#include <vector>
#include <iostream>

Calculator::Calculator() : wxFrame(nullptr, wxID_ANY, "AC CAL", wxPoint(300, 300), wxSize(400,400))
{
	zero = num.CreatezeroButton();
	one =  num.CreateoneButton();
	two =  num.CreatetwoButton();
	three = num.CreatethreeButton();
	four = num.CreatefourButton();
	five = num.CreatefiveButton();
	six = num.CreatesixButton();
	seven = num.CreatesevenButton();
	eight = num.CreateeightButton();
	nine = num.CreatenineButton();
	add = num.CreateaddButton();
	subtract = num.CreatesubtractButton();
	multiply = num.CreatemultiplyButton();
	divide = num.CreatedivideButton();
	ac = num.CreateacButton();
	equal = num.CreateequalButton();
	choice = num.CreatechoiceButton();

	

}
int main()
{
	CalculatorProcessor pluse;
	pluse.MButtons = "+";
	CalculatorProcessor minus;
	minus.MButtons = "-";
	CalculatorProcessor expand;
	expand.MButtons = "*";
	CalculatorProcessor conquer;
	conquer.MButtons = "÷";





	pluse.Materialize();
	minus.Materialize();
	expand.Materialize();
	conquer.Materialize();
}
