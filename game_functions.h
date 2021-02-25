#ifndef BATTAGLIANAVALE_GAME_FUNCTIONS_H
#define BATTAGLIANAVALE_GAME_FUNCTIONS_H

/*
 * Autore: cavallo gabriele
 * Contiene funzioni per la gestione del gioco
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "game_constr.h"
#include "gen_utils.h"
#include <stdbool.h>
#include "costants.h"

/**
 * Prende in input il nome di un giocatore e lo assegna al giocatore passato come parametro
 * @param player Puntatore al giocatore a cui assegnare il nome.
 * @param p_count Numero di volte che questa funzione è già stata eseguita.
 */
static void askPlayerName(struct Player *player, unsigned int p_count);

/**
 * @brief Crea un giocatore gestendo la richiesta del nome, l'input della mappa, e tutto ciò che riguarda il giocatore
 * @return Un puntatore ad una struct Player istanziata nello heap ram
 */
static Player* initPlayer();

/**
 * Rimuove un giocatore rilasciando tutte le risorse che utilizza in ram
 * @param player Il puntatore al giocatore da rimuovere
 * @return true se la rimozione ha avuto successo.
 */
static bool removePlayer(Player* player);

/**
 * Aggiunge una barca al giocatore specificato prendendo in input le informazioni necessarie
 * @param player Un puntatore al giocatore per cui bisogna aggiungere una barca.
 */
static void addBoat(struct Player *player);

/**
 * Prende in input una cella applicando una cerca politica.
 * @param byNormalCoordinates Indica se utilizzare delle coordinate normali (es A4) o dei numeri
 * @param message Il messaggio da scrivere
 * @return La cella creata.
 */
static Cell inputCellCoordinates(bool byNormalCoordinates, char *message);

#endif //BATTAGLIANAVALE_GAME_FUNCTIONS_H
