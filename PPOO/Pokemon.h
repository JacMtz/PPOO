#pragma once
#include <string>
#include <iostream>

using namespace std;

class Pokemon
{
private: 

	string nombre; 
	int vida;
	bool muerto = false;
	int da�o;
	
public:
	
	Pokemon(string, int);
	int getVida();
	void sale();
	bool derrotado();
	void recibir(int);
	int Placaje();
	int Mordisco();
	int Rapidez();
	int Picotazo();
};

Pokemon::Pokemon(string _nombre, int _vida) {

	nombre = _nombre;
	vida = _vida;

}

int Pokemon::getVida() {
	return vida;
}

void Pokemon::sale()
{
	cout << nombre << " que tiene " << vida << " de vida" << endl;

}

bool Pokemon::derrotado()
{
	if (vida <= 0)
	{
		muerto = true;
	}

	return muerto;
}

void Pokemon::recibir(int da�o) {

	vida -= da�o;

}

int Pokemon::Placaje()
{
	da�o = 7;
	return da�o;
}

int Pokemon::Mordisco()
{
	da�o = 15;
	return da�o;
}
int Pokemon::Picotazo()
{
	da�o = 6;
	return da�o;
}
int Pokemon::Rapidez()
{
	da�o = 10;
	return da�o;
}
