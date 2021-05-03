#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include "CVectorComposicion.h"
#include <string.h>
using namespace System;
using namespace std;

void OpAgregar(CVectorComposicion* objCComposicion) {
	Console::Clear();
	string nombre, genero, acorde;
	int annio, versos;
	bool tipo;
	
	cout << "Ingrese Nombre de la cancion: "; cin >> nombre;
	for (int i = 0; i < nombre.size(); i++) {
		nombre[i] = toupper(nombre[i]);
		
	}
		
	cout << "Ingrese Genero de la cancion: "; cin >> genero;
	cout << "Ingrese el tipo de la cancion 0 Cantada y 1 Instrumental: "; cin >> tipo;
	do
	{
		cout << "Ingrese el anio de composion: "; cin >> annio;
	} while (annio>2018||annio<1800);
	
	cout << "Ingrese el acorde musical: "; cin >> acorde;
	do
	{
		cout << "Ingrese el numero de versos de la cancion: "; cin >> versos;
	} while (versos<0);
	objCComposicion->Agregar(nombre,genero,tipo,annio,acorde,versos);
}
void OpListar(CVectorComposicion* objCComposicion) {
	Console::Clear();
	vector<CComposicion*> aux = objCComposicion->Get_Arreglo();
	for (int i = 0; i < aux.size(); i++)
	{
		cout <<"Posicion: "<<i + 1<<" -> ";
		cout << aux.at(i)->Get_Nombre() << "|" <<
			aux.at(i)->Get_Genero() << "|";
		if (aux.at(i)->Get_Tipo()==0)
		{
			cout << "Cantada";
		}
		else if (aux.at(i)->Get_Tipo()==1)
		{
			cout << "Instrumental";
		}
		cout << aux.at(i)->Get_Acorde()<<aux.at(i)->Get_Annio() << "|" << aux.at(i)->Get_Versos();
		cout << endl;
	}
	_getch();

}
void OpEliminar(CVectorComposicion* objCComposicion,int pos){
	Console::Clear();
	cout << "Ingrese la posicion a eliminar: "; cin >> pos;
	pos -= 1;
	objCComposicion->Eliminar(pos);
	_getch();
}
int main()
{	
	int pos;
	CVectorComposicion* objCComposion = new CVectorComposicion();
	cout << "*****OBRAS MUSICALES*****" << endl;
	while (true)
	{
		if (kbhit())
		{		
			char tecla = getch();
			if (tecla == '1') OpAgregar(objCComposion);
			else if (tecla == '2') OpListar(objCComposion);
			else if (tecla == '3') OpEliminar(objCComposion, pos);

		}
		
	}
	return EXIT_SUCCESS;
}
