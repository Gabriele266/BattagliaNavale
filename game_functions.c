
#ifndef GAME_FUNCTIONS_CPP
#define GAME_FUNCTIONS_CPP

#include "game_functions.h"

/// Chiede il nome di un giocatore e lo assegna alla struttura corretta.
static void askPlayerName(struct Player *player, unsigned int p_count){
    printf("Inserire il nome del giocatore %d: ", p_count);
    scanf("%s", player->name);
    fflush(stdin);
}

/// Aggiunge una barca al giocatore
void addBoat(struct Player *player){
    printf("E' stata richiesta l'aggiunta di una nuova nave. \nLe navi hanno una dimensione, che puo' andare da 2 a 4 caselle. Il totale delle caselle che sono occupabili dalle navi è  ");
    // Controllo se il giocatore può avere ancora navi
    if(player->boat_occuped_cells < PLAYER_BOAT_CELLS){
        // Il giocatore può ancora avere navi
        puts("Inserire il verso della nave: ");
        puts("1) Nave orizzontale verso destra. ");
        puts("2) Nave orizzontale verso sinistra. ");
        puts("3) Nave verticale verso il basso");
        puts("4) Nave verticale verso l'alto. ");

        puts("\nLa tua scelta: ");
        int chose;
        scanf("%d", &chose);


    }
    else{
        printf("Purtroppo non puoi più aggiungere barche. Hai raggiunto il numero massimo.");
    }
}

Cell inputCellCoordinates(bool byNormalCoordinates, char *message){
    puts(message);

    // Controllo se devo utilizzare le coordinate normali
    if(byNormalCoordinates){
        // prendo la lettera della colonna
        char column = getSafeChar("Inserire la lettera della colonna: ", 'A', (char) ('A' + MAP_SIZE));
        // Prendo il numero della riga
        int line = getSafeInt("Inserire il numero della riga: ", MAP_SIZE);

        Cell c;
        c.column = column;
        c.row = line;

        return c;
    }
    else{
        // Prendo la colonna in formato numerico
        unsigned int column = getSafeInt("Insere la colonna in formato numerico: ", MAP_SIZE);
        // Prendo la riga
        unsigned int line = getSafeInt("Inserire la riga: ", MAP_SIZE);

        // Formatto la struttura cella
        Cell c;
        c.column = (char) (column + 'A');
        c.row = line;
        return c;
    }
}

#endif
