#pragma once
#include <string>
#include <iostream>

using namespace std;

class Ataques
{
private:
	
	int turnos, da�o;

public:

	Ataques(int, int);

};

Ataques::Ataques(int _turnos, int _da�o)
{
	turnos = _turnos;
	da�o = _da�o;
}