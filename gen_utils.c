//
// Created by gabriele on 24/02/21.
//

#include "gen_utils.h"

int getSafeInt(char *message, int max_value){
    int num;
    do{
        printf(message);
        scanf("%d", &num);

        if(num > max_value){
            printf("Il valore inserito e' troppo grande. ");
        }
    }while(num > max_value);
    return num;
}

int getInt(char *message){
    printf(message);
    int num;
    scanf("%d", &num);
    fflush(stdin);

    return num;
}

char getSafeChar(char *message, char start_char, char end_char){
    // Carattere preso in input
    char c = NULL;

    do{
        // Scrivo il messaggio e prendo il carattere
        printf(message);
        c = getchar();

        if(c != NULL){
            if(c < start_char || c > end_char ){
                printf("Il carattere %c non rappresenta nessuna colonna. Si accettano caratteri da %c a %c\n", c, start_char, end_char);
                c = NULL;
            }
        }

    }while(c < start_char || c > end_char);
    return c;
}