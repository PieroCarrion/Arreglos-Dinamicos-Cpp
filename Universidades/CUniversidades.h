#pragma once
#include <string>
using namespace std;
class Universidades {
private:
	int ruc;
	string RzSocial;
	string acronimo;
	string direccion;
	string pais;
	bool sector;//0-Estatal,1-Privada 
public:
	Universidades();
	Universidades(int ruc,string RzSocial,string acronimo,string direccion,string pais,bool sector);
	~Universidades();
	int Get_Ruc();
	string Get_RzSocial();
	string Get_Acronimo();
	string Get_Direccion();
	string Get_Pais();
	bool Get_Sector();

	void Set_Ruc(int ruc);
	void Set_RzSocial(string Rzsocial);
	void Set_Acronimo(string acronimo);
	void Set_Direccion(string direccion);
	void Set_Pais(string pais);
	void Set_Sector(bool sector);
};

Universidades::Universidades() {}
Universidades::Universidades(int ruc, string RzSocial, string acronimo, string direccion, string pais, bool sector) {
	this->ruc = ruc;
	this->RzSocial = RzSocial;
	this->acronimo = acronimo;
	this->direccion = direccion;
	this->pais = pais;
	this->sector = sector;
}
Universidades::~Universidades() {}
int Universidades::Get_Ruc() {
	return this->ruc;
}
string Universidades::Get_RzSocial() {
	return this->RzSocial;
}
string Universidades::Get_Acronimo() {
	return this->acronimo;
}
string Universidades::Get_Direccion() {
	return this->direccion;
}
string Universidades::Get_Pais() {
	return this->pais;
}
bool Universidades::Get_Sector(){
	return this->sector;
}

void Universidades::Set_Ruc(int ruc) {
	this->ruc = ruc;
}
void Universidades::Set_RzSocial(string RzSocial) {
	this->RzSocial = RzSocial;
}
void Universidades::Set_Acronimo(string acronimo) {
	this->acronimo = acronimo;
}
void Universidades::Set_Direccion(string direccion) {
	this->direccion = direccion;
}
void Universidades::Set_Pais(string pais) {
	this->pais = pais;
}
void Universidades::Set_Sector(bool sector) {
	this->sector = sector;
}