#ifndef BATTAGLIANAVALE_GAME_CONSTR_H
#define BATTAGLIANAVALE_GAME_CONSTR_H

/**
 * Contiene i costrutti utili al gioco
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/// Dimensione della riga e della colonna
#define GRID_SIZE 20

/// Numero massimo di navi per giocatore
#define PLAYER_BOAT_CELLS 24

/// Rappresenta lo stato di una cella per un giocatore dopo che è stato inviato un colpo (Mancato, Centrato, Non ancora tentato)
enum CellShotState{
    Missed,
    Hit,
    NotTryed
};

/// Rappresenta lo stato di una cella dal punto di vista del giocatore a cui appartiene
enum CellState{
    Boat,
    Water,
    BoatHit
};

/// Rappresenta una cella in battaglia navale
typedef struct Cell{
    /// Colonna della cella
    unsigned int row;
    /// Riga della cella
    char column;
    /// Indica se la cella è una nave
    enum CellState state;
    /// Stato del controllo (in caso si tratti di una cella di una mappa per capire le posizioni delle altre navi)
    enum CellShotState shot_state;
} Cell;

/// Rappresenta un giocatore
typedef struct Player{
    /// Nome del giocatore
    char name[10];
    /// Matrice della mappa del giocatore
    struct Cell map[GRID_SIZE][GRID_SIZE];
    // Mappa delle celle avversarie
    struct Cell adv_map[GRID_SIZE][GRID_SIZE];
    /// Numero di celle occupate da navi
    unsigned int boat_occuped_cells;
} Player;

#endif //BATTAGLIANAVALE_GAME_CONSTR_H
