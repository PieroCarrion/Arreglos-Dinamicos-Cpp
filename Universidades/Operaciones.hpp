#pragma once
#include <string>
#include "CUniversidades.h"
using namespace std;
Universidades* AgregarUniversidad(int *N, Universidades* Vector,int ruc, string RzSocial, string acronimo, string direccion, string pais, bool sector) {
	Universidades* aux = new Universidades[*N+1];
	for (int i = 0; i < *N; i++) {
		aux[i] = Vector[i];
	}
	aux[*N] = new Universidades(ruc, RzSocial, acronimo, direccion, pais, sector);
	*N += 1;
	return aux;
}
