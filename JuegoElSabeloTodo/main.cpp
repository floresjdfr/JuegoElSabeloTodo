#include "Jugador.h"


int main() {

	//Test jugador
	Jugador* j = Jugador::getInstancia();
	j->setUsuario("Flores_CR");
	j->setPuntaje(j->getPuntaje() + 100);
	cout << j->toString();





	system("pause");
}