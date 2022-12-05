#pragma once
#include <string>
#include <iostream>

using namespace std;

class Jugador
{
private:

	string nombre;
	int exp;
	

public:

	Jugador(string, int);
	void decir();
	void Ganador(string);
};

Jugador::Jugador(string _nombre, int _exp) {

	nombre = _nombre;
	exp = _exp;
}

void Jugador::decir()
{
	cout << "El jugador " << nombre << " tiene " << exp << " de exp y elige a: " << endl;

}

void Jugador::Ganador(string _jugador)
{
	cout << _jugador << " gana el combate y ha subido 115 puntos de experiencia" << endl;
	exp += 115;
}



