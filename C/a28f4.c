#include "simpio.h"
#include "math.h"
void get_code(int *code);
float discount_percentage(int code,float *timi);
int product_points(int code,float teliki_timi);

int main(){
    int pontoi = 0;
    float teliki_timi = 0;
    float discount_total = 0;
    int code;
    float teliki_timi_p;

    while(TRUE){
        get_code(&code);
        if(code==0){
           printf("\nPROGRAM TERMINATED");
           printf("\nSinolo agoron: %.2f$\nTeliki ekptosi: %.2f$",teliki_timi,discount_total);
           printf("\nTelikoi pontoi: %d.\n",pontoi);
           break;
        }
        discount_total += discount_percentage(code,&teliki_timi_p);
        teliki_timi += teliki_timi_p;
        pontoi += product_points(code,teliki_timi);
    }

    return 0;
}

void get_code(int *code_p){
    while(TRUE){
        printf("\nPRESS 0 TO EXIT");
        printf("\nGIVE 0<=NUMBER<=2000: ");
        int code = GetInteger();
        if(0<=code&&code<=2000){
                *code_p=code;
                break;
            }
    }
}

float discount_percentage(int code,float *teliki_timi_p){

    while(TRUE){
        printf("Dwse timi: ");
        float timi = GetReal();
        if(timi>0){
            float discount;
        if(1<=code&&code<=300){
            discount = timi*0.05;
        }else if(301<=code&&code<=500){
            discount = timi*0.1;
        }else if(501<=code&&code<=1000){
            discount = timi*0.15;
        }else if(1001<=code&&code<=2000){
            discount = timi*0.2;
        }
            *teliki_timi_p = timi - discount;
            printf("Teliki timi einai: %.2f$\nH ekptosi einai: %.2f$\n",*teliki_timi_p,discount);
            return discount;
        }else{printf("Dwse THETIKI timi");}
        }
}

int product_points(int code,float teliki_timi){
    int points = 1;
    if(1000<=code&&code<=1500){
        points+=ceil(teliki_timi/5);
        printf("Oi pontoi einai: %d.\n",points);
        return points;
    }
    printf("Oi pontoi einai: %d.\n",points);
    return points;
}
