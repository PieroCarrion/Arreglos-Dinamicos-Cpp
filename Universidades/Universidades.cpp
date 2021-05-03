#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <string>
#include "Operaciones.hpp"
#include "CUniversidades.h"
using namespace System;
using namespace std;
void menu() {
	Console::SetCursorPosition(2, 8); cout << ":::::Menu::::" << endl;
	Console::SetCursorPosition(2, 10); cout << "1. Agregar " << endl;
	Console::SetCursorPosition(2, 12); cout << "2. Listar" << endl;
}
Universidades* OpAgregar(int *N,Universidades* Vector) {
	Console::Clear();
	cout << "Agregar: " << endl;
	int ruc;
	string RzSocial;
	string acronimo;
	string direccion;
	string pais;
	bool sector;

	cout << "Ingrese RUC: " ; cin >> ruc;
	cout << "Ingrese Razon Social: "; cin >> RzSocial;
	cout << "Ingrese Acronimo: "; cin >> acronimo;
	cout << "Ingrese direccion: "; cin >> direccion;
	cout << "Ingrese Pais: "; cin >> pais;
	cout << "ingrese sector (0-Privado,1-Estatal): "; cin >> sector;
	return AgregarUniversidad(N, Vector,ruc,RzSocial,acronimo,direccion,pais,sector);
}
void OpListar(int* N, Universidades* Vector) {
	for (int i = 0; i < *N; i++)
	{
		cout << "Ruc: ";Vector[i].Get_Ruc();
		cout << "Razon Social: "; Vector[i].Get_RzSocial();
		cout << "Acronimo: "; Vector[i].Get_Acronimo();
		cout << "Direccion: "; Vector[i].Get_Direccion();
		cout << "Pais: "; Vector[i].Get_Pais();
		cout << "Sector"; Vector[i].Get_Sector();
		cout << endl;
	}
	_getch();
}
int main()
{
	Universidades* Vector = NULL;
	int N = 0;
	while (true) {
		menu();
		if (_kbhit())
		{
			char opt = _getch();
			if (opt == '1') OpAgregar(&N,Vector);
			else if (opt == '2') OpListar(&N,Vector);
		}
		_sleep(100);

	}
	return 0;
}
