#include "stdafx.h"  //________________________________________ CalculadoraIMC.cpp
#include "CalculadoraIMC.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	CalculadoraIMC app;
	return app.BeginDialog(IDI_CalculadoraIMC, hInstance);
}

void CalculadoraIMC::Window_Open(Win::Event& e)
{
	//________________________________________________________ lsIMC
	lsIMC.StateCount = 3;
	lsIMC.SetState(0, 0.0, 20.5, RGB(240, 190, 250), L"Obesidad");
	lsIMC.SetState(1, 30.0, 24.5, RGB(50, 220, 50), L"Sobrepeso");
	lsIMC.SetState(2, 60.0, 29.5, RGB(50, 250, 220), L"Normal");
	lsIMC.SetState(3, 60.0, 45.0, RGB(0, 250, 250), L"Bajo Peso");
	lsIMC.Level = 45.0;
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

	}
}

