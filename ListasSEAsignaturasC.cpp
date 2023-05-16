// ListasSEAsignaturasC.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include"LSEAsignaturas.h"
#include"Lista.h"
#include"nodoestudiante.h"
#include <iostream>
#include"LSEAsignaturas.h"
using namespace std;
int cant;
string cod, nombre, c;
LSEAsignaturas * L = new LSEAsignaturas;

void inserta_asignatura(int i)
{
	nodoasig* nodop = new nodoasig;
	cod = "";
	nombre = "";
	cant = 0;

	cout << "Entre los Datos de la Asignatura:\n ";
	cout << "Codigo o Siglas de la Asignatura: \n";
	cin >> cod;
	cout << "Nombre de la Asignatura: \n";
	cin >> nombre;
	cout << "Cantidad de Horas:\n ";
	cin >> cant;
	nodop->codigo = cod;
	nodop->descripcion = nombre;
	nodop->cantidad = cant;
	if (i==1) {
		L->insert_first(nodop);
	}
	else
		if (i == 2) {
			L->insert_last(nodop);
		}
		else
			L->insertar(nodop);
	
}

void mostrar_asignatura(int i) {
	if (i == 1)
		L->mostrar_f();
	else
		L->mostrar_w();
	(void)getchar();
	(void)getchar();
	cout << "Oprima una tecla para salir";
}



void eliminar_asignatura(int i) {
	if (i == 1)
		L->delet_first();
	else
		if (i == 2)
		L->delet_last();

		else
		{
			string valor = "";
			cout << "Introduzca el codigo de la asignatura que quiere eliminar:" << endl;
			cin >> valor;
			L->delet(valor);
		}

	(void)getchar();
	(void)getchar();
	cout << "Oprima una tecla para salir";
}

void insertar_estudiante() {
	
		string _id, _nombre, _apellido, genero;
		int _edad;
		bool _sexo;
		nodoestudiante* nodoe = new nodoestudiante;
		nodoasig* p;
		
		cout << "Entre el codigo de la Asignatura en que va a inscribir al estudiante:\n ";
		cin >> cod;

		cout << "        Introduzca los Datos del Estudiante: \n";
		cout << "Introduzca el Identificador o CI del Estudiante: \n";
		cin >> _id;
		cout << "Introduzca el nombre del Estudiante: \n";
		cin >> _nombre;
		cout << "Introduzca el apellido del Estudiante: \n";
		cin >> _apellido;
		cout << "Introduzca la edad del Estudiante: \n";
		cin >> _edad;
		cout << "Introduzca el sexo del Estudiante (M-F): \n";
		cin >> genero;
		if (genero == "M")
		{
			_sexo = true;
		}
		else {
			_sexo = false;
		}
		nodoe->id = _id;
		nodoe->nombre = _nombre;
		nodoe->apellido = _apellido;
		nodoe->sexo = _sexo;
		nodoe->edad = _edad;
		p = L->buscar_asignatura(cod);
		if (p == nullptr) {
		// si no existe la asignatura, error, debe crear la asignatura primero
			cout << "No existe esa asignatura, primero, debe crearla: \n";
			(void)getchar();
		}
		else
		{
			L->insertar_estudiantes_asignatura(p,nodoe);
		}
			
		return;

}

void mostrar_estudiantes_asignatura() {
	nodoasig* p;
	cout << "Entre el codigo de la Asignatura:\n ";
	cin >> cod;
	p = L->buscar_asignatura(cod);
	if (p == nullptr) {
		// si no existe la asignatura, error, debe crear la asignatura primero
		cout << "No existe esa asignatura y no existen tampoco estudiantes \n";
		(void)getchar();
	}
	else
	{
		// se asocia el estudiante a la lista de estudiates de esa asignatura
		L->mostrar_estudiantes(p);
		(void)getchar();
		(void)getchar();
	}
}

void mostrarmas() {

	nodoasig* p = (nodoasig*)L->first;
	nodoestudiante* q;
	while (p != NULL) {
		q = p->nextest;
		while (q!=nullptr)
		{
			if (q->sexo)
			{
				cout << q->id << endl;
				cout << q->nombre << endl;
				cout <<	q->apellido << endl;
				cout <<	q->edad << endl;
				cout <<"masculino" << endl;
			}
		
			
			q = q->getnext();
		}
		p = p->getnext();
	}
	(void)getchar();
	(void)getchar();
	
}

void mostrarFem() {

	nodoasig* p = (nodoasig*)L->first;
	nodoestudiante* q;
	while (p != NULL) {
		q = p->nextest;
		while (q != nullptr)
		{
			if (q->sexo==false)
			{
				cout << q->id << endl;
				cout << q->nombre << endl;
				cout << q->apellido << endl;
				cout << q->edad << endl;
				cout << q->sexo << endl;
			}


			q = q->getnext();
		}
		p = p->getnext();
	}
	(void)getchar();
	(void)getchar();

}


int main()
{
	
		int opc;
			
		do
		{

			system("cls");

			cout << "           LISTA DE ASIGNATURAS" << endl;
			cout << "      Seleccione la opcion a realizar\n\n";
			cout << "      1.- Insertar una asignatura por delante\n";
			cout << "      2.- Insertar una asignatura por atras\n";
			cout << "      3.- Insertar una asignatura ordenadamente\n";
			cout << "      4.- Mostrar toda la lista de asignaturas utilizando un for\n";
			cout << "      5.- Mostrar toda la lista de asignaturas utilizando un while\n";
			cout << "      6.- Eliminar la primera asignatura\n";
			cout << "      7.- Eliminar la ultima asignatura\n";
			cout << "      8.- Eliminar una determinada asignatura\n";
			cout << "      9.- Cantidad de Asignaturas en la lista\n";
			cout << "      10.- Total de horas de todas las Asignaturas en la lista\n";
			cout << "     11.- Insertar un estudiante en una asignatura\n";
			cout << "     12.- Mostrar todos los estudiantes de una asignatura\n";
			cout << "     13.- Eliminar un estudiante de una asignatura\n";
			cout << "     14.- Mostrar toda la multilista\n";
			cout << "     15.- Salir";
			cout << "       \n\n\nOpcion(1-15): ";

			cin >> opc;

			switch (opc)
			{
			case 1:
				/*inserta_asignatura(1);*/
				break;
			case 2:
				/*inserta_asignatura(2);*/
				break;
			case 3:
				inserta_asignatura(3);
				break;
			case 4:
				mostrar_asignatura(1);
				break;
			case 5:
				mostrar_asignatura(2);
				break;
			case 6:
				/*eliminar_asignatura(1);*/
				break;
			case 7:
				/*eliminar_asignatura(2);*/
				break;
			case 8:
				/*eliminar_asignatura(3);*/
				break;
			case 9:
				cout << "La cantidad de asignaturas es :"<< L->total_elementos();
				(void)getchar();
				(void)getchar();
				break;
			case 10:
				mostrarFem();
				break;
			case 11:
				insertar_estudiante();
				break;
			case 12:
				mostrar_estudiantes_asignatura();
				break;
			case 13:
				break;
			case 14:
				mostrarmas();
				
				break;
			case 15:
				exit(0);
				break;

			}
		} 	while ((opc != 16));



		return 0;
	}





