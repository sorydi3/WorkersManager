//#include "stdafx.h"
#include "Worker.h"
#include<iostream>
#include<string>
using namespace std;


//CONSTRUCTOR	
Worker::Worker() {
	//Pre:	--		
	//Post:	treballador	inicialitzat	(codi,	0;	nom,	cognom,	població,	en	blanc	i	data	per	defecte)		
	a_codi = 0;
	a_nom = a_cognom = a_poblacio = "";
	a_dNaixement = Data();
}


//	MÈTODES	CONSULTORS	
void Worker::mostrar() const {
	//Pre:	--				
	//Post:	mostra	la	informació	de	l’empleat	actual	
	cout << "COD  : " << a_codi << endl;
	cout << "NOM  : " << a_nom << endl;
	cout << "COG  : " << a_cognom << endl;
	cout << "POB  : " << a_poblacio << endl;
	cout << "D.N : ";
	a_dNaixement.mostrar(2);
}

bool Worker::esMesJove(Worker empl) const {
	//Pre:	--		
	//Post:	cert	si	l’empleat	actual	és	més	jove	que	empl,	fals	altrament	
	return empl.a_dNaixement.esMenor(a_dNaixement);
}

//	MÈTODES	MODIFICADORS	
void Worker::llegir() {
	//Pre:	--;	Post:	llegeix	un	emplear	i	retorna	cert	si	s’ha	llegit	un	empleat	(fals	si	el	codi	és	CODI_FI,	0)
		cout << "CODI:" << endl;
		cin >> a_codi;
		cout << "NOM:" << endl;
		cin >> a_nom;
		cout << "COGNOM:" << endl;
		cin >> a_cognom;
		cout << "POBLACIO:" << endl;
		cin >> a_poblacio;
		cout << "DATA DE NAIXEMENT (AAAAMMDD):" << endl;
		a_dNaixement.llegir(1);
}

bool Worker::llegirEs() {
	//Pre:	--;	Post:	llegeix	un	emplear	i	retorna	cert	si	s’ha	llegit	un	empleat	(fals	si	el	codi	és	CODI_FI,	0)
	cout << "CODI:" << endl;
	cin >> a_codi;
	if (a_codi != CODI_FI) {
		cout << "NOM:" << endl;
		cin >> a_nom;
		cout << "COGNOM:" << endl;
		cin >> a_cognom;
		cout << "POBLACIO:" << endl;
		cin >> a_poblacio;
		cout << "DATA DE NAIXEMENT (AAAAMMDD):" << endl;
		a_dNaixement.llegir(1);
	}
	return a_codi != CODI_FI;
}
int Worker::getCodi() const {
	return a_codi;
}
string Worker::getNom() const {
	return a_nom;
}
string Worker::getCognom() const {
	return a_cognom;
}

string Worker::getPoblacio() const {
	return a_poblacio;
}
Data Worker::getData() const {
	return a_dNaixement;
}
void Worker::setCodi(unsigned codi) {
	a_codi = codi;
}
void Worker::setNom(string nom) {
	a_nom = nom;
}
void Worker::setCognom(string cognom) {
	a_cognom = cognom;
}
void Worker::setPoblacio(string poblacio) {
	a_poblacio = poblacio;
}
void Worker::setData(Data data){
	a_dNaixement = data;
}