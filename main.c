/**
 * Gabriele Cavallo
 * Gioco di battaglia navale
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "game_constr.h"
#include "game_functions.c"

// Primo giocatore
struct Player player1;
// Secondo giocatore
struct Player player2;

int main() {
    // Chiedo il nome del primo giocatore
    askPlayerName(&player1, 1);
    // Chiedo il nome del secondo giocatore
    askPlayerName(&player2, 2);

    return 0;
}
