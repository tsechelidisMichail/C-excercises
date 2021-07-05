#include "simpio.h"

int main(){
    float teli_kikloforias;

    printf("Dwse gram co2/khm: ");
    int co2 = GetInteger();

    if(co2<=120){
        teli_kikloforias = co2*0.9;
        printf("To poso pliromis einai: %.1f",teli_kikloforias);
    }else if(co2<=140){
        teli_kikloforias = co2*1.1;
        printf("To poso pliromis einai: %.1f",teli_kikloforias);
    }else{
        teli_kikloforias = co2*1.7;
        printf("To poso pliromis einai: %.1f",teli_kikloforias);
    }

    return 0;
}
