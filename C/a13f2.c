#include "simpio.h"

#define LEFTA 5
#define TIMI_KAFE 0.7

int main(){
    printf("Dwse kafedes: ");
    int kafedes = GetInteger();
    float resta = LEFTA - kafedes*TIMI_KAFE;

    if(resta<0){
        printf("Den ftanoun ta xrhmata gia tosous kafedes.");
    }else{
        int Dyo_eyro = 0;
        int Ena_eyro = 0;
        int Peninta_lepta = 0;
        int Eikosi_lepta = 0;
        int Deka_lepta = 0;

        while(resta>0){
        if (resta>=2){
            Dyo_eyro++;
            resta =resta -2;
        }else if(resta>=1){
            Ena_eyro++;
            resta=resta-1;
        }else if(resta>=0.5){
            Peninta_lepta++;
            resta=resta-0.5;
        }else if(resta>=0.2){
            Eikosi_lepta++;
            resta=resta-0.2;
        }else if(resta>=0.1){
            Deka_lepta++;
            resta=resta -0.1;
        }else{break;}
        }
        printf("Resta: \n");
        printf("2_eyro: %d\n",Dyo_eyro);
        printf("1_eyro: %d\n",Ena_eyro);
        printf("50_lepta: %d\n",Peninta_lepta);
        printf("20_lepta: %d\n",Eikosi_lepta);
        printf("10_lepta: %d\n",Deka_lepta);
    }

    return 0;
}
