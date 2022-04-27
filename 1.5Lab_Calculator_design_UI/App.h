#pragma once
#include "wx/wx.h"



class Calculator;
class ButtonFactory;
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

