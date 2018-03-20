// ManagerWorkers.cpp : Defines the entry point for the console application.
//
//#include "stdafx.h"
#include "Manager.h"
#include<iostream>
using namespace std;
void Handler(unsigned opcio,Manager &manager) {
	switch (opcio)
	{
	case 1:
		cout << "ENTRA UN EMPLEAT:" << endl;
	manager.entrarEmpleat();
	 break;
	case 2:
		cout << "ENTRA UN EMPLEAT(CODI : 0 PER ACABAR) :" << endl;
	manager.entrarEmpleats();
		break;
	case 3:
	manager.llistaEmpleats();
		break;
	case 4:
		manager.FitxaEmpleats();
		break;
	case 9:
		Manager::menu();
		break;
	default:
		cout << "NOT A VALID OPTION" << endl;
		break;
	}
}

int main()
{

	Manager manager;
	unsigned opcio;
	Manager::menu();
	cout << "OPCIO:" << endl;
	cin >> opcio;
	while (opcio != 0) {
		Handler(opcio, manager);
		cout << "OPCIO:" << endl;
		cin >> opcio;
	}
	cout << "FINAL DEL PROGRAMA" << endl;
}
