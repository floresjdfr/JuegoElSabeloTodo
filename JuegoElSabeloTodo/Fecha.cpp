#include "Fecha.h"


Fecha::Fecha(string d, string m, string a, string hr, string min, string sec) {
	this->dia = d;
	this->mes = m;
	this->annio = a;
	this->hora = hr;
	this->minuto = min;
	this->segundo = sec;
}
string Fecha::getDia() { return dia; }
string Fecha::getMes() { return mes; }
string Fecha::getAnnio() { return annio;  }
string Fecha::getHora() { return hora; }
string Fecha::getMinuto() { return minuto; }
string Fecha::getSegundo() { return segundo; }

void Fecha::setDia(string x) { dia = x; }
void Fecha::setMes(string y) {	mes = y; }
void Fecha::setAnnio(string z) { annio = z;  }
void Fecha::setHora(string x) { dia = x; }
void Fecha::setMinuto(string y) { mes = y; }
void Fecha::setSegundo(string z) { segundo = z; }

string Fecha::obtenerFecha(string an, string mes, string dia, string hora, string minuto, string segundo) {
	
	time_t t = time(NULL);

	 tm* timePtr = localtime(&t);

	 stringstream a;
	 a << timePtr->tm_year + 1900;
	 an = a.str();

	 stringstream m;
	 m << timePtr->tm_mon + 1;
	 mes = m.str();
	 if (atoi(mes.c_str()) < 10)
		 mes = "0" + mes;

	 stringstream d;
	 d << timePtr->tm_mday;
	 dia = d.str();
	 if (atoi(dia.c_str()) < 10)
		 dia = "0" + dia;

	 stringstream h;
	 h << timePtr->tm_hour;
	 hora = h.str();
	 if (atoi(hora.c_str()) < 10)
		 hora = "0" + hora;

	 stringstream mi;
	 mi << timePtr->tm_min;
	 minuto = mi.str();
	 if (atoi(minuto.c_str()) < 10)
		 minuto = "0" + minuto;

	 stringstream sec;
	 sec << timePtr->tm_sec;
	 segundo = sec.str();
	 if (atoi(segundo.c_str()) < 10)
		 segundo = "0" + segundo;

	 string Fecha = "Dia: " + dia +"/ " + mes + "/ "+ an + "  "+ "Hora:" + hora +":"+ minuto +"."+ segundo;

	 return Fecha;
}