#include "nodoestudiante.h"

nodoestudiante::nodoestudiante(){
}

nodoestudiante::nodoestudiante(string _id, string _nombre, string _apellido, int _edad,bool _sexo){
	id = _id;
	nombre = _nombre;
	apellido = _apellido;
	edad = _edad;
	sexo = _sexo;
}

nodoestudiante::~nodoestudiante(){
}


nodoestudiante* nodoestudiante::getnext()
{
	return (nodoestudiante*)nodo::getnext();
}