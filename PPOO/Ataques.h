#pragma once
#include <string>
#include <iostream>

using namespace std;

class Ataques
{
private:
	
	int turnos, daño;

public:

	Ataques(int, int);

};

Ataques::Ataques(int _turnos, int _daño)
{
	turnos = _turnos;
	daño = _daño;
}