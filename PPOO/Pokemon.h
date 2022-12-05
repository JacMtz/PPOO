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
	int daño;
	
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

void Pokemon::recibir(int daño) {

	vida -= daño;

}

int Pokemon::Placaje()
{
	daño = 7;
	return daño;
}

int Pokemon::Mordisco()
{
	daño = 15;
	return daño;
}
int Pokemon::Picotazo()
{
	daño = 6;
	return daño;
}
int Pokemon::Rapidez()
{
	daño = 10;
	return daño;
}
