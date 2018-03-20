#pragma once
#include<string>
#include"Data.h"
using namespace std;
class Worker
{
public:
	//	Descripció:	guarda	la	informació	d’un	empleat	(nom,	cognom,	població	i	data	de	naixement)	
public:
	static const int CODI_FI = 0;
	//	CONSTRUCTORS	
	//	CONSTRUCTORS	
	Worker();
	//	Pre:--;	Post:	té	codi=0,	nom,	cognom	i	poblacio	en	blanc,	i	la	data	de	naix.	per	defecte	
	//	CONSULTORS	
	void mostrar() const;
	//Pre:	--;	Post:	mostra	la	informació	del	treballador	actual	
	bool esMesJove(Worker w) const;
	//Pre:	--;	Post;	cert	si	e	és	més	jove	l’empleat	actual	
	//	MODIFICADORS
	void llegir(); //	alternaZva:	es	podria	posar	un	llegir	acció	i	un	esDarrer()	consultor				   //Pre:	--;	Post:	llegeix	un	emplear	i	retorna	cert	si	s’ha	llegit	un	empleat	(fals	si	el	codi	és	0)
	bool llegirEs();
	int getCodi() const;
	string getNom() const;
	string getCognom() const;
	string getPoblacio() const;
	Data getData() const;
	void setCodi( unsigned codi) ;
	void setNom(string nom) ;
	void setCognom(string cognom);
	void setPoblacio(string poblacio);
	void setData(Data data);
private:
	int a_codi;
	string a_nom;
	string a_cognom;
	string a_poblacio;
	Data a_dNaixement;
};

