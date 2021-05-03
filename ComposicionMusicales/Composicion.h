#pragma once
#include <string>
using namespace std;
class CComposicion {
private:
	string nombre;
	string genero;
	bool tipo;
	int annio;
	string acorde;
	int versos;
public:
	CComposicion();
	CComposicion(string nombre, string genero, bool tipo, int annio, string acorde, int versos);
	~CComposicion();
	string Get_Nombre();
	string Get_Genero();
	bool Get_Tipo();
	string Get_Acorde();
	int Get_Versos();
	int Get_Annio();
	void Set_Annio(int annio);

	void Set_Nombre(string nombre);
	void Set_Genero(string genero);
	void Set_Tipo(bool tipo);
	void Set_Acorde(string acorde);
	void Set_Versos(int versos);
};
CComposicion::CComposicion(){}
CComposicion::CComposicion(string nombre, string genero, bool tipo, int annio, string acorde, int versos) {
	this->nombre = nombre;
	this->genero = genero;
	this->tipo = tipo;
	this->annio = annio;
	this->versos = versos;
}
CComposicion::~CComposicion() {}
string CComposicion::Get_Nombre() {
	return this->nombre;
}
string CComposicion::Get_Genero() {
	return this->genero;
}
bool CComposicion::Get_Tipo() {
	return this->tipo;
}
string CComposicion::Get_Acorde() {
	return this->acorde;
}
int CComposicion::Get_Versos() {
	return this->versos;
}

void CComposicion::Set_Nombre(string nombre) {
	this->nombre = nombre;
}
void CComposicion::Set_Genero(string genero) {
	this->genero=genero;
}
void CComposicion::Set_Tipo(bool tipo) {
	this->tipo = tipo;
}
void CComposicion::Set_Acorde(string acorde) {
	this->acorde = acorde;
}
void CComposicion::Set_Versos(int versos) {
	this->versos = versos;
}
int CComposicion::Get_Annio() {
	return this->annio;
}
void CComposicion::Set_Annio(int annio) {
	this->annio = annio;
}