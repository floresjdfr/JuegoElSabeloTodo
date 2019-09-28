#ifndef JUGADOR_H
#define JUGADOR_H

#include <iostream>
#include <sstream>

using namespace std;

class Jugador
{
private:
	string usuario;
	int puntaje;
	static Jugador* instancia;
	Jugador(string, int);
	Jugador();
public:
	void borrarInstancia();

	//gets
	static Jugador* getInstancia();
	string getUsuario() const;
	int getPuntaje() const;

	//sets
	void setUsuario(string);
	void setPuntaje(int);

	//Otros
	string toString() const;
	
};



#endif