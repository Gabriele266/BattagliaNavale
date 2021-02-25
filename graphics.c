#include "graphics.h"

void stampaVista(Cell **dati, unsigned int row_count, unsigned int columns_count){

}

void printIntroduction(){
    puts(endl endl "Benvenuti in Battaglia Navale, un gioco di Gabriele Cavallo!!!" endl);
    printf("Versione del gioco: " GAME_VERSION endl);
    puts("Il gioco e' composto da due giocatori, ognuno con una sua mappa e delle navi. "
         endl "Lo scopo del gioco e' quello di centrare tutte le navi avversarie. ");
    puts("Per iniziare e' necessario fornire delle informazioni base e creare la propria mappa. ");
    puts(endl "Iniziamo." endl);
}