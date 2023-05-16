#pragma once
#include "nodo.h"
#include <iostream>
using namespace std;
class nodoestudiante :public nodo
{
public:

	string id, nombre, apellido;
	int edad;
	bool sexo;

//	nodoestudiante *nextest;

	nodoestudiante();
	nodoestudiante(string _id, string _nombre, string _apellido, int _edad,bool _sexo);
	~nodoestudiante();

	//metodos get y set

	string getid() { return id; }
	string getnombre() { return nombre; }
	string getapellido() { return apellido; }
	int getedad() { return edad; }

	void setid(string _id) { id = _id; }
	void setnombre(string _nombre) { nombre = _nombre; }
	void setapellido(string _apellido) { apellido= _apellido; }
	void setedad(int _edad) { edad = _edad; }

	nodoestudiante* getnext() override;

	//void setnextest( nodoestudiante *_nextest) {  nextest=_nextest; };
	//nodoestudiante* getnextest() { return nextest; }; 

};

