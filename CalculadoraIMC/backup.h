#pragma once  //______________________________________ CalculadoraIMC.h  
#include "Resource.h"
class CalculadoraIMC : public Win::Dialog
{
public:
	CalculadoraIMC()
	{
	}
	~CalculadoraIMC()
	{
	}
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::LevelState lsIMC;
	Win::Label lb1;
	Win::Label lb2;
	Win::Textbox tbxPeso;
	Win::Textbox tbxAltura;
	Win::Label lb3;
	Win::Label lb4;
	Win::Button gbox1;
	Win::Button radioHombre;
	Win::Button radioMujer;
	Win::Button btCalcular;
protected:
	Win::Gdi::Font fontArial014A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::PixelToDlgUnitX(516);
		dlgTemplate.cy = Sys::Convert::PixelToDlgUnitY(347);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"CalculadoraIMC";
		lsIMC.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_VISIBLE, 224, 9, 193, 331, hWnd, 1000);
		lb1.Create(NULL, L"Peso", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 6, 14, 65, 25, hWnd, 1001);
		lb2.Create(NULL, L"Altura", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 6, 52, 65, 25, hWnd, 1002);
		tbxPeso.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 71, 13, 94, 25, hWnd, 1003);
		tbxAltura.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 70, 50, 94, 25, hWnd, 1004);
		lb3.Create(NULL, L"Kg", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 171, 13, 45, 25, hWnd, 1005);
		lb4.Create(NULL, L"metros", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 171, 50, 45, 25, hWnd, 1006);
		gbox1.Create(WS_EX_TRANSPARENT, L"Sexo", WS_CHILD | WS_VISIBLE | BS_GROUPBOX, 9, 97, 209, 91, hWnd, 1007);
		radioHombre.Create(NULL, L"Hombre", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_AUTORADIOBUTTON | BS_LEFT | BS_VCENTER, 25, 124, 136, 26, hWnd, 1008);
		radioMujer.Create(NULL, L"Mujer", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_AUTORADIOBUTTON | BS_LEFT | BS_VCENTER, 24, 149, 137, 26, hWnd, 1009);
		btCalcular.Create(NULL, L"Calcular", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 418, 13, 91, 28, hWnd, 1010);
		fontArial014A.Create(L"Arial", 14, false, false, false, false);
		lsIMC.Font = fontArial014A;
		lb1.Font = fontArial014A;
		lb2.Font = fontArial014A;
		tbxPeso.Font = fontArial014A;
		tbxAltura.Font = fontArial014A;
		lb3.Font = fontArial014A;
		lb4.Font = fontArial014A;
		gbox1.Font = fontArial014A;
		radioHombre.Font = fontArial014A;
		radioMujer.Font = fontArial014A;
		btCalcular.Font = fontArial014A;
	}
	//_________________________________________________
	void btCalcular_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btCalcular.IsEvent(e, BN_CLICKED)) {btCalcular_Click(e); return true;}
		return false;
	}
};
