#include "simpio.h"

int main(){
    printf("Dwse orio: ");
    int orio = GetInteger();
    float athrisma = 0;

    for(int i=1;i<=orio;i++){
        athrisma += (float)1/i;
    }
    printf("To athroisma einai: %.2f",athrisma);

    return 0;
}
