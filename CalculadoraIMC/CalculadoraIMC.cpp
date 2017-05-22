#include "stdafx.h"  //________________________________________ CalculadoraIMC.cpp
#include "CalculadoraIMC.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	CalculadoraIMC app;
	return app.BeginDialog(IDI_CalculadoraIMC, hInstance);
}

void CalculadoraIMC::Window_Open(Win::Event& e)
{
	//________________________________________________________ lsIMC
	lsIMC.StateCount = 4;
	lsIMC.SetState(0, 0.0, 20.5, RGB(255,0,0), L"Bajo de peso");
	lsIMC.SetState(1, 20.5, 25.5, RGB(255,255,0), L"Normal");
	lsIMC.SetState(2, 25.5, 30.5, RGB(0,128,0), L"Sobrepeso");
	lsIMC.SetState(3, 30.5, 45.0, RGB(0,0, 255), L"Normal");
	lsIMC.Level = 20.0;
	this->radioHombre.Checked = true;
	this->radioMujer.Checked = false;
}

void CalculadoraIMC::btCalcular_Click(Win::Event& e)
{
	const double peso = tbxPeso.DoubleValue;
	const double altura = tbxAltura.DoubleValue;
	double IMC = peso / (altura*altura);
	if (radioHombre.Checked == true)
	{
		lsIMC.SetState(0, 0.0, 20.5, RGB(255, 0, 0), L"Bajo de pedo");
		lsIMC.SetState(1, 20.5, 25.5, RGB(255, 255, 0), L"Normal");
		lsIMC.SetState(2, 25.5, 30.5, RGB(0, 128, 0), L"Sobrepeso");
		lsIMC.SetState(3, 30.5, 45.0, RGB(0, 0, 255), L"Obesidad");
		lsIMC.Level = IMC;
	}
	else
	{
		lsIMC.SetState(0, 0.0, 20.5, RGB(255, 0, 0), L"Bajo de paso");
		lsIMC.SetState(1, 20.5, 24.5, RGB(255, 255, 0), L"Normal");
		lsIMC.SetState(2, 24.5, 29.5, RGB(0, 128, 0), L"Sobrepeso");
		lsIMC.SetState(3, 29.5, 45.0, RGB(0, 0, 255), L"Obesidad");
		lsIMC.Level = IMC;
	}
}

