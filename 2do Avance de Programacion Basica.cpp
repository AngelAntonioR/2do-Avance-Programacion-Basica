#include <iostream>
#include <string>
#include <conio.h>
#include <string.h>

using namespace std;

string nombre[3], genero[3],caracter[3],clasificacion[3],año[3];

int opc,i;
bool a = true;

void main()
{

	while (a)
	{
		cout << "\t\n Que onda ya seleciona una opcion " << endl;
		cout << "1.Agregar articulo" << endl;
		cout << "2.Modificar articulo" << endl;
		cout << "3.Lista de articulos" << endl;
		cout << "4.Eliminar aritulo" << endl;
		cout << "5.Limpiar pantalla" << endl;
		cout << "6.Salir del menu " << endl;
		cin >> opc;

		switch (opc)
		{
		  case 1:
		  {
			cout << "Nombre del articulo" << endl;
			getline(cin, nombre[i]);
			cout << "Alguna caracteristica del articulo:" << endl;
			getline(cin, caracter[i]);
			cout << "Cual es el genero:" << endl;
			getline(cin, genero[i]);
			cout << "Cual es la clasificacion:" << endl;
			getline(cin, clasificacion[i]);
			cout << "De que año es:" << endl;
			getline(cin, año[i]);
			break;
		  }
		  case 2:
		  {
			cout << "modificar estara disponible en un futuro bay" << endl;
			break;
		  }
		  case 3:
		  {
			  cout << "Nombre del articulo" << nombre[i] << endl;
			  cout << "Caracteristica del articulo" << caracter[i] << endl;
			  cout << "Genero del articulo:" << genero[i] << endl;
			  cout << "Clasificacion del articulo:" << clasificacion[i] << endl;
			  cout << "Año del articulo" << año[i] << endl;
			break;
		  }
		  case 4:
		  {
			cout << "eliminar aritulo estara disponible en un futuro bay" << endl;
			break;
		  }
		  case 5:
		  {
			system("cls");
			break;
		  }
		  case 6:
		  {
			cout << "Estas saliendo del programa" << endl;
			a = false;
		  }
		 

		}
	}
	system("pause<null");
}
