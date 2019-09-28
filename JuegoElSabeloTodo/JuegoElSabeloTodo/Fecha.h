#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <ctime>
#include <iostream>
#include <sstream>
#include <cstdlib>
using namespace std;



class Fecha {
private:
	string dia;
	string mes;
	string annio;
	string hora;
	string minuto;
	string segundo;
public:
	Fecha(string, string, string, string, string, string);
	string getDia();
	string getMes();
	string getAnnio();
	string getHora();
	string getMinuto();
	string getSegundo();
	void setDia(string);
	void setMes(string);
	void setAnnio(string);
	void setHora(string);
	void setMinuto(string);
	void setSegundo(string);

	string obtenerFecha(string, string, string, string, string, string);
};

