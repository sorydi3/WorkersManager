#pragma once
#include "Worker.h"
class Manager
{
public:
	//CONSULTORS
	Manager();
	//MODIFICADORS
	void entrarEmpleat();
	void llistaEmpleats() const;
	void FitxaEmpleats() const;
	void entrarEmpleats();
	static void menu();
	void search_element(int codi, bool& is_there, int & pos_element) const;
private:
	static const unsigned MAX_EMPLEATS = 50;
	Worker a_t[MAX_EMPLEATS];
	int a_n;
	////////////////////////////////////////////
	void incertarOrdenadament(Worker w);
	void CercaDicotomica();
};

