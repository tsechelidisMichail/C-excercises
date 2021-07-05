#include "simpio.h"
#include "math.h"

int main(){
    double rate = 0.07;
    long car_num = 80000;
    long years = 0;

    while(TRUE){
        if (car_num<=160000){
            car_num = ceil(car_num *(1+rate));
            years++;
        }else{break;}
    }
    printf("The future cars will be: %ld ,at %ld years!!",car_num,years);

    return 0;
}
