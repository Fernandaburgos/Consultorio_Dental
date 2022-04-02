#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<windows.h>
#include<string>
#include<iomanip>
#include<stdlib.h>

using namespace std;

int menu(void)
{

	cout << "\nBIEVENIDO A SU CONSULTORIO DENTAL\n Porfavor eliga una opcion: \n";
	cout << "\n1. Crear cita.";
	cout << "\n2. Ver citas vigentes";
	cout << "\n3. Modificar cita.";
	cout << "\n4. Eliminar cita.";
	cout << "\n5. Salir.";
	cout << "\nIngrese su opcion: ";

}

int main()
{

	int opcion, opc2, opc3, i = 0, a = 0, max = 3, cantidad_tratamiento_vender;
	string nombre_tratamiento_vender;
	float precio_tratamiento_vender, total_final, total, sub_total;

	string nombre_cliente[50], nombre_tratamiento[50];
	float precio_tratamiento[50], codigo[5], hora_cita[4];




	do {
		menu();
		cin >> opcion;

		switch (opcion)
		{
		case 1:
			for (int i = 0; i < 3; i++) {

				cout << "\nIngrese su nombre: ";
				cin >> nombre_cliente[i];
				cout << "\nIngrese el nombre del tratamiento: " << endl;
				cin >> nombre_tratamiento_vender;
				cout << "\nIngrese el precio del tratamiento: " << endl;
				cin >> precio_tratamiento_vender;
				cout << "Ingrese el codigo del tratamiento: ";
				cin >> codigo[a];
				cout << "\nIngrese la cantidad del tratamiento: " << endl;
				cin >> cantidad_tratamiento_vender;
				cout << "\nProgramar hora de cita: " << endl;
				cin >> hora_cita[4];

				total = precio_tratamiento_vender * cantidad_tratamiento_vender;
				sub_total = total;

				total_final = total;


				cout << "\nTratamiento registrado: " << nombre_tratamiento_vender << endl;
				cout << setprecision(2) << fixed << "Precio del tratamiento: " << precio_tratamiento_vender << endl;
				cout << "Cantidad vendida: " << cantidad_tratamiento_vender << endl;
				cout << "Sub Total: " << sub_total << endl;
				cout << "\nTotal a pagar: " << total_final << endl;

				cout << "\nIngrese 1 para volver al menu y 0 para salir: ";

				break;
			} cin >> opc2;

			break;

		case 2:
			for (i = 1; i < max; i++)
			{
				cout << "\nNombre de cliente: " << nombre_cliente[i] << endl;
				cout << "\nHora de la cita: " << hora_cita[i] << endl;
			}
			for (a = 1; a < max; a++)
			{
				cout << "\nNombre del tratamiento: " << nombre_tratamiento[a] << endl;
				cout << setprecision(5) << fixed << "Codigo del tratamiento: " << codigo[a] << endl;
				cout << setprecision(2) << fixed << "Precio del tratamiento: " << precio_tratamiento[a] << endl;
			}

			cout << "\nIngrese 1 para volver al menu y 0 para salir: ";
			cin >> opc2;
			break;

		case 3:

			break;

		case 4:

			break;

		case 5:
			return 0;


		default:
			cout << "Esa opcion no es valida.";
			cout << "\nIngrese 1 para volver al menu y 0 para salir: ";
			cin >> opc2;
		}
	} while (opc2 == 1);

}