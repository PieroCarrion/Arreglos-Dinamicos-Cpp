#pragma once
#include <vector>
#include <string>
#include "Composicion.h"
using namespace std;
class CVectorComposicion {
private:	
	vector<CComposicion*> arrComposicion;
public:
	CVectorComposicion();
	~CVectorComposicion();
	vector<CComposicion*> Get_Arreglo();
	void Agregar(string nombre, string genero, bool tipo,int annio,string acorde,int versos);
	void Eliminar(int Pos);
	vector<CComposicion*> Reporte1();
	vector<CComposicion*> Reporte2();
	vector<CComposicion*> Reporte3();
	vector<CComposicion*> Reporte4();
};

CVectorComposicion::CVectorComposicion() {}
CVectorComposicion::~CVectorComposicion() {}
vector<CComposicion*> CVectorComposicion::Get_Arreglo() {
	return this->arrComposicion;
}
void CVectorComposicion::Agregar(string nombre, string genero, bool tipo, int annio, string acorde, int versos) {
	CComposicion* objComposicion = new CComposicion(nombre,genero,tipo,annio,acorde,versos);
	arrComposicion.push_back(objComposicion);
}
void CVectorComposicion::Eliminar(int Pos) {
	arrComposicion.erase(arrComposicion.begin() + Pos);
}
