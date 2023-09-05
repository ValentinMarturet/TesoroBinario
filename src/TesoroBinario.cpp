/*
 * TesoroBinario.cpp
 *
 *  Created on: 2 sep. 2023
 *      Author: Valentin
 */

#include "TesoroBinario.h"

#include <iostream>


TesoroBinario inicializarTesoroBinario(int alto, int ancho){
	TesoroBinario tesoroBinario;

	Jugador jugador1 = inicializarJugador(1);
	Jugador jugador2 = inicializarJugador(2);

	tesoroBinario.jugador1 = &jugador1;
	tesoroBinario.jugador2 = &jugador2;
	Tablero tablero = inicializarTablero(alto, ancho);

	tesoroBinario.tablero = &tablero;

	return tesoroBinario;
}


void iniciarJuego(TesoroBinario * tesoroBinario){





	imprimirTablero(tesoroBinario->tablero, tesoroBinario->jugador1);


}
