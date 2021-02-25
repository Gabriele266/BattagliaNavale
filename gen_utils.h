/**
 *  Utility generiche per la gestione di vettori, numeri etc
 *
 */
#ifndef BATTAGLIANAVALE_GEN_UTILS_H
#define BATTAGLIANAVALE_GEN_UTILS_H

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * \brief Prende in input un numero scrivendo un messaggio.
 * @arg message Una stringa contenente il messaggio da scrivere
 * @arg maximum_value Il valore massimo che il numero può assumere
 * @return Il numero che rispetta i criteri
 */
int getSafeInt(char *message, int maximum_value);

/**
 * Prende in input un numero inserendo il messaggio.
 * @param message Messaggio da scrivere
 * @return Il numero preso in input
 */
int getInt(char *message);

/**
 * Prende in input un carattere applicando una politica di controllo
 * @param message Messaggio da scrivere
 * @param start_char Primo carattere della tabella ascii da accettare
 * @param end_char Carattere massimo da accettare. Tutti quelli successivi non verranno accettati
 * @return Il primo carattere che rispetta il criterio
 */
char getSafeChar(char *message, char start_char, char end_char);

#endif //BATTAGLIANAVALE_GEN_UTILS_H
