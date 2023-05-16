#include "LSEAsignaturas.h"




LSEAsignaturas::LSEAsignaturas() : Lista(){
}



LSEAsignaturas::~LSEAsignaturas() {
}



void LSEAsignaturas::mostrar_f()
{

	nodoasig* p = nullptr;
	
	if (vacia())
		cout << "Lista vacia";
	else

	{
		int i;
		p = (nodoasig*)first;
		
		for (i = 1; p != NULL; i++)
		{
			cout << p->codigo << endl;
			cout << p->descripcion << endl;
			cout << p->cantidad << endl;
			p = p->getnext();

		}

		return;
	}
}



void LSEAsignaturas::mostrar_w()
{

	nodoasig* p;

	if (vacia())
		cout << "Lista vacia";
	else

	{
		p = (nodoasig*)first;
		while (p != NULL) {
			cout << p->codigo << endl;
			cout << p->descripcion << endl;
			cout << p->cantidad << endl;
			p = p->getnext();
			
		}
	}

	return;

}


int LSEAsignaturas::mostrar_total_horas() {

	nodoasig* p;
	int suma = 0;
		
		p = (nodoasig*)first;
		while (p != nullptr) {
			suma = suma + p->cantidad;
			p = p->getnext();

		}
		return suma;
}


nodoasig *LSEAsignaturas::buscar_asignatura(string valor) {

	nodoasig* p, *q;
	bool enc = false;

	p = (nodoasig*)first;
	while ((p != nullptr) && (p->codigo != valor)) {

		q = p;
		p = p->getnext();
	}

	return p;

}
	

nodoasig* LSEAsignaturas::buscar_posicion(string valor) {

	nodoasig* p, * q;
	bool enc = false;

	p = (nodoasig*)first;
	while ((p != nullptr) && (p->codigo < valor)) {

		q = p;
		p = p->getnext();
	}

	return p;

}


void LSEAsignaturas::delet(string valor)
{
	nodoasig* p, * q;

	if (vacia())
		cout << "No hay elementos en la lista";
	else
	{
		p = buscar_asignatura(valor);

		if (p == nullptr)
			cout << "No existe ese elemento en la lista";
		else
		{
			if ((p == first) && (p == last))
				iniciar();
			else
			{
				q = (nodoasig*)getantcursor(p);
				if (q != nullptr) {
					q->next = p->next;

					if (p == first)
						first = p->next;
					else
						if (p == last)
							last = q;

				}


			}
		}

	}

	return;
}
	


void LSEAsignaturas::insertar(nodoasig *nodop){


nodoasig* p;

p = buscar_posicion(nodop->codigo);
insert(nodop, p);
return;
}



void LSEAsignaturas::mostrar_estudiantes(nodoasig* nodop) {
	nodoestudiante* p = nullptr;
	string v[2] = { "Femenino", "Masculino" };
	if (nodop!=nullptr)
	{
		int i;
		p = nodop->getnextestudiante();

		for (i = 1; p != NULL; i++)
		{
			cout << p->id << endl;
			cout << p->nombre << endl;
			cout << p->apellido << endl;
			cout << p->edad << endl;
			cout << v[p->sexo] << endl;
			p = p->getnext();

		}

		return;
	}
}

		
void LSEAsignaturas::insertar_estudiantes_asignatura(nodoasig* nodop, nodoestudiante* nodoe) {
	

	if ((nodop != nullptr) & (nodoe!=nullptr))
	{
		nodoe->next= nodop->getnextestudiante();
		nodop->nextest = nodoe;
	}
	return;
}


		
	

