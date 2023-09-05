/*
 * principal.cpp
 *
 *  Created on: 2 sep. 2023
 *      Author: Valentin
 */
#include "interacciones.h"
#include "Tablero.h"
#include "TesoroBinario.h"


int main(){

	int alto, ancho;
	alto = 20;
	ancho = 20;

	Tablero tablero = inicializarTablero(alto, ancho);
	Jugador jugador1 = inicializarJugador(1);
	imprimirTablero(&tablero, &jugador1);


	//main ideal
//	TesoroBinario tesoroBinario = inicializarTesoroBinario(20, 20);
//	iniciarJuego(&tesoroBinario);
//	borrarTablero(&tesoroBinario);
	borrarTablero(&tablero);
	return 0;
}





