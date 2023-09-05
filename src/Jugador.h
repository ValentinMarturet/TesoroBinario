/*
 * Jugador.h
 *
 *  Created on: 3 sep. 2023
 *      Author: Valentin
 */

#ifndef JUGADOR_H_
#define JUGADOR_H_

#include "Casillero.h"

typedef Coordenada Tesoros[4];

typedef struct {
	Tesoros tesoros;
	int vidas = 4;
	int id;

} Jugador;


Jugador inicializarJugador(int id);



/*
 * Una funcion que chequea si hay un tesoro en esas coordenadas y si es asi, devuelve la posicion del array en la que se
 * encuentra ese tesoro.
 */
int hayTesoro(Tesoros tesoros, int fila, int columna);

#endif /* JUGADOR_H_ */
