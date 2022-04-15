#pragma once
#include "wx/wx.h"


class Calculator;

class App : public wxApp
{
private:
	Calculator* calculator = nullptr;

public:
	App();
	~App();
	virtual bool OnInit();
};

