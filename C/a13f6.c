#include "simpio.h"

void decompose(long number,int *digits,double *MO_ditigs,int *max_digit);

int main(){
    int digits,max_digit;
    double MO_ditigs;

    printf("Please insert non-negative number: ");
    int number = GetInteger();

    decompose(number,&digits,&MO_ditigs,&max_digit);
    printf("\nDigits: %d\nMO_ditigs: %.3f\nmax_digit: %d",digits,MO_ditigs,max_digit);

    return 0;
}
void decompose(long number,int *digits,double *MO_ditigs,int *max_digit){
    *digits = 1;
    *MO_ditigs = 0;
    *max_digit = 0;
    while(number){
        int digit = number%10;
        *MO_ditigs += digit;
        if(digit>*max_digit){
            *max_digit = digit;
        }
        number/=10;
        *digits+=1;
    }
    if(*digits==1){
        *digits=0;
        *MO_ditigs=0;
    }else{
        *digits-=1;
        *MO_ditigs /=*digits;
    }
}
