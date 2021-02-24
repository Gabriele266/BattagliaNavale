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