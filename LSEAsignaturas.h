#pragma once
#include <iostream>
#include "nodoasig.h"
using namespace std;

#include "Lista.h"

class LSEAsignaturas:public Lista
{
public:
	
	LSEAsignaturas();
	~LSEAsignaturas();
	void mostrar_f();
	void mostrar_w();
	int mostrar_total_horas();
	nodoasig* buscar_asignatura(string valor);
	nodoasig* buscar_posicion(string valor);
	void delet(string valor);
	void insertar(nodoasig *nodop);
	void mostrar_estudiantes(nodoasig *nodop);
	void insertar_estudiantes_asignatura(nodoasig* nodop, nodoestudiante* nodoe);
};

