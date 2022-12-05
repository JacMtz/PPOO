// PPOO.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include "Pokemon.h"
#include "Header.h"

using namespace std;

int main()
{
	srand(static_cast<unsigned int>(time(0)));
	string nombre1;
	string nombre2;
	string PokeNombre1;
	string PokeNombre2;
	bool derrota = false;
	cout << "Jugador 1 ingresa tu nombre: ";
	cin >> nombre1;
	cout << "y el de tu pokemon: ";
	cin >> PokeNombre1;

	cout << "\nJugador 2 ingresa tu nombre: ";
	cin >> nombre2;
	cout << "y el de tu pokemon: ";
	cin >> PokeNombre2;
	cout << "\n";

	Jugador jugador1 = Jugador(nombre1, 0);
	Jugador jugador2 = Jugador(nombre2, 0);
	Pokemon poke1 = Pokemon(PokeNombre1, 200);
	Pokemon poke2 = Pokemon(PokeNombre2, 200);
	jugador1.decir();
	poke1.sale();
	jugador2.decir();
	poke2.sale();

	int caraocruz = rand() % 2 + 1;

	while (derrota == false) {

		if (caraocruz == 1)
		{

			cout << nombre1 << " Que haras? \n 1.-Picotazo  2.Placaje \n 3.-Rapidez  4.-Mordisco" << endl;
			int opt;
			cin >> opt;

			if (opt == 1)
			{
				poke2.recibir(poke1.Picotazo());
			}
			else if (opt == 2)
			{
				poke2.recibir(poke1.Placaje());
			}
			else if (opt == 3)
			{
				poke2.recibir(poke1.Rapidez());
			}
			else if (opt == 4)
			{
				poke2.recibir(poke1.Mordisco());
			}

			cout << PokeNombre2 << " ha recibido el ataque y ahora tiene " << poke2.getVida() << " de vida" << endl;
			caraocruz = 2;

		}

		else if (caraocruz == 2)
		{

			cout << nombre2 << " Que haras? \n 1.-Picotazo  2.Placaje \n 3.-Rapidez  4.-Mordisco" << endl;
			int opt;
			cin >> opt;

			if (opt == 1)
			{
				poke1.recibir(poke2.Picotazo());
			}
			else if (opt == 2)
			{
				poke1.recibir(poke2.Placaje());
			}
			else if (opt == 3)
			{
				poke1.recibir(poke2.Rapidez());
			}
			else if (opt == 4)
			{
				poke1.recibir(poke2.Mordisco());
			}

			cout << PokeNombre1 << " ha recibido el ataque y ahora tiene " << poke1.getVida() << " de vida" << endl;
			caraocruz = 1;
		}

		if (poke1.derrotado() == true)
		{
			cout << PokeNombre1 << " ha sido derrotado ";
			jugador2.Ganador(nombre2);
			derrota = true;
		}
		else if (poke2.derrotado() == true)
		{
			cout << PokeNombre2 << " ha sido derrotado ";
			jugador1.Ganador(nombre1);
			derrota = true;
		}

	}

}




// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
