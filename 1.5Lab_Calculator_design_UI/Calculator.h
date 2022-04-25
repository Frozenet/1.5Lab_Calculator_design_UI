#pragma once
#include "wx/wx.h"
#include <string>
#include "ButtonFactory.h"

class Calculator : public wxFrame
{
// Make button for zero, one, two, three, four, five, six, seven, eight, nine, add, subtract, multiply, divide, equal, AC, ...
private:
	wxButton* zero = nullptr;
	wxButton* one = nullptr;
	wxButton* two = nullptr;
	wxButton* three = nullptr;
	wxButton* four = nullptr;
	wxButton* five = nullptr;
	wxButton* six = nullptr;
	wxButton* seven = nullptr;
	wxButton* eight = nullptr;
	wxButton* nine = nullptr;
	wxButton* add = nullptr;
	wxButton* subtract = nullptr;
	wxButton* multiply = nullptr;
	wxButton* divide = nullptr;
	wxButton* ac = nullptr;
	wxButton* equal = nullptr;

	ButtonFactory num;

	wxTextCtrl* choice = nullptr;

public:
	Calculator();
	
};

