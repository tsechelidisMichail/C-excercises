#include "simpio.h"

string imera[7] = {"MONDAY","TUESDAY","WEDNESDAY","THURSDAY","FRIDAY","SATURDAY","SUNDAY"};

int main(){

    printf("Dwse enan arithmo apo to 1 mexri to 7: ");
    int arithmos = GetInteger() -1;

    if (0<=arithmos && arithmos<=6){
            printf("The day is: %s",imera[arithmos]);
    }else{printf("ERROR");}

    return 0;
}
