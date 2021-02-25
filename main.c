/**
 * Gabriele Cavallo
 * Gioco di battaglia navale
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "game_constr.h"
#include "game_functions.c"
#include "graphics.h"

// Primo giocatore
Player *player1;
// Secondo giocatore
Player *player2;

int main() {
    // Scrivo l'introduzione del gioco
    printIntroduction();

    // Chiedo il nome del primo giocatore
    askPlayerName(&player1, 1);
    // Chiedo il nome del secondo giocatore
    askPlayerName(&player2, 2);

    return 0;
}
