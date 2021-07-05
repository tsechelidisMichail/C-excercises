#include "simpio.h"

int main(){
    printf("Dwse arithmo thetiko: ");

    int arithmos = GetInteger();
    if(arithmos%2==0){
        for(int i=0;i<=arithmos;i=i+2){
            printf("%d,",i);
            }
    }else{
        for(int i=1;i<=arithmos;i=i+2){
            printf("%d,",i);
            }
    }

    return 0;
}
