#include "simpio.h"
#include "math.h"

int main(){
    printf("Dwse ton arxiko arithmo aytokinitwn: ");
    long car_num = GetLong();
    printf("Dwse ton etisio arithmo ayksisis: ");
    double rate = GetReal();
    printf("Dwse to orio: ");
    int orio = GetInteger();


    long years = 0;
    while(TRUE){
        if (car_num<=orio){
            car_num = ceil(car_num *(1+rate));
            years++;
        }else{break;}
    }
    printf("The future cars will be: %ld ,at %ld years!!",car_num,years);

    return 0;
}
