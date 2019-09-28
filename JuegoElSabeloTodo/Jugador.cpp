#include "Jugador.h"

Jugador* Jugador::instancia = NULL;

Jugador::Jugador(string Usuario, int Puntaje) {
	usuario = Usuario;
	puntaje = Puntaje;
}

Jugador::Jugador() {
	usuario = " ";
	puntaje = 0;
}



void Jugador::borrarInstancia() {
	if (instancia) {
		delete instancia;
	}
}

//Gets

Jugador* Jugador::getInstancia() {
	if (!instancia) {
		instancia = new Jugador();
	}
	return instancia;
}
string Jugador::getUsuario() const{
	return usuario;
}
int Jugador::getPuntaje() const{
	return puntaje;
}


//Sets

void Jugador::setUsuario(string u) {
	usuario = u;
}
void Jugador::setPuntaje(int p) {
	puntaje = p;
}


//Otros
string Jugador::toString() const {
	stringstream s;
	s << "Usuario: " << usuario << endl;
	s << "Puntaje: " << puntaje << endl;
	return s.str();
}

