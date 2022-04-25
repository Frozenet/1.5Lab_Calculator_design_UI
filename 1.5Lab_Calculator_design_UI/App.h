#pragma once
#include "wx/wx.h"


class Calculator;
class ButtonFactory;
 class ButtonPress
 {
	 std::string Symbol;
	 virtual void Add(ButtonPress* press) = 0;
	 virtual void Materialize() = 0;
 };

class App : public wxApp
{
private:
	Calculator* calculator = nullptr;
	ButtonFactory* buttonfactory = nullptr;

public:
	App();
	~App();
	virtual bool OnInit();
};

