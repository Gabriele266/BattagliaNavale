#ifndef BATTAGLIANAVALE_GRAPHICS_H
#define BATTAGLIANAVALE_GRAPHICS_H

/**
 * Cavallo Gabriele
 * Contiene funzioni per la gestione della parte grafica di battaglia navale
 */
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "game_constr.h"
#include "costants.h"

/**
 * @brief Scrive una vista di navi sul terminale
 * @param dati Una matrice con la mappa del giocatore
 * @param columns_count Numero di colonne della matrice
 * @param row_count Numero di righe della matrice
 */
void stampaVista(Cell **dati, unsigned int row_count, unsigned int columns_count);

/**
 * Scrive l'introduzione del gioco sul terminale
 */
void printIntroduction();

#endif //BATTAGLIANAVALE_GRAPHICS_H
