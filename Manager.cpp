//#include "stdafx.h"
#include "Manager.h"
#include<iostream>
#include <string>
using namespace std;
Manager::Manager()
{
	a_n = 0;
}

void Manager::entrarEmpleat() {
	//Pre: el polígon té menys de MAX_VERTEXS
	//Post: s’ha afegit p com a darrer vèrtex
	Worker w;
	w.llegir();
		Worker p = w;
		bool exiteix = false;
		int pos;
		search_element(p.getCodi(), exiteix, pos);
		if (!exiteix) {
			incertarOrdenadament(p);
		}
		else {
			//a_t[pos].setCodi(p.getCodi());
			//a_t[pos].setNom(p.getNom());
			//a_t[pos].setCognom(p.getCognom());
			//a_t[pos].setPoblacio(p.getPoblacio());
			//a_t[pos].setData(p.getData());
		}
}

void Manager::entrarEmpleats() {
	//Pre: el polígon té menys de MAX_VERTEXS
	//Post: s’ha afegit p com a darrer vèrtex
	Worker w;
	while (w.llegirEs())
	{
		Worker p = w;
		bool exiteix = false;
		int pos;
		search_element(p.getCodi(), exiteix, pos);
		if (!exiteix) {
			incertarOrdenadament(p);
		}
		else {
			//a_t[pos].setCodi(p.getCodi());
			//a_t[pos].setNom(p.getNom());
			//a_t[pos].setCognom(p.getCognom());
			//a_t[pos].setPoblacio(p.getPoblacio());
			//a_t[pos].setData(p.getData());
		}
	}
}

void Manager::incertarOrdenadament(Worker w) {
	//Pre: 0<=v.n<MAX, v.t[0..n-1] ordenat creixentment
	//Post: x inserit ordenadament a v.t

	int i = a_n;
	while (i > 0 && w.getCodi()<a_t[i - 1].getCodi()) {
		a_t[i] = a_t[i - 1];
		i--;
	}
	a_t[i] = w;
	a_n++;
}


void Manager::llistaEmpleats() const {
	cout << "LLISTAT DELS EMPLEATS" << endl;
	for (int i = 0; i < a_n; i++) {
		cout << a_t[i].getCodi() << " " << a_t[i].getNom() << "  " << a_t[i].getCognom() << endl;
	}
}

void Manager::FitxaEmpleats() const {
	cout << "FITXES DELS EMPLEATS" << endl;
	cout << "--------------------" << endl;
	for (int i = 0; i < a_n; i++) {
		a_t[i].mostrar();
	cout << "--------------------" << endl;
	}

}

void Manager:: search_element(int codi, bool& is_there, int & pos_element)const {
	//Pre: 0<=v.n<=MAX, v.t[0..v.n-1] ordenat creixentment
	//Post: retorna cert si x és un dels elements de v.t[0..v.n-1] i la posicio, fals
	//altrament
	int low = 0;
	int hight = a_n - 1;
	int pos = 0;
	while (low <= hight && !is_there) {
		pos = (low + hight) / 2;
		if (a_t[pos].getCodi() == codi) is_there = true;
		else if (a_t[pos].getCodi() < codi)low = pos + 1;
		else hight = pos - 1;
	}
	if (is_there)pos_element = pos;
	else pos_element = low;
	//incert_to_position(vector, pos, app);
}
 void Manager::menu() {
	cout << "OPCIONS:" << endl;
	cout << "1 : ENTRAR UN EMPLEAT " << endl;
	cout << "2 : ENTRAR DIVERSOS EMPLEATS" << endl;
	cout << "3 : LLISTAR ELS EMPLEATS" << endl;
	cout << "4 : MOSTRAR LES FITXES DELS EMPLEATS" << endl;
	cout << "9 : MOSTRAR EL MENU D'OPCIONS" << endl;
	cout << "0 : SORTIR DEL PROGRAMA " << endl;
 }