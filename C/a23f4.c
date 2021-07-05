#include "simpio.h"

bool valid_time(int ores,int lepta,int d_lepta);

int main(){

    printf("Dwse tis ores: ");
    int ores = GetInteger();
    printf("Dwse ta lepta: ");
    int lepta = GetInteger();
    printf("Dwse ta defterolepta: ");
    int d_lepta = GetInteger();

    if (valid_time(ores,lepta,d_lepta)){
        printf("WRA EGKYRH");
    }else{
        printf("WRA  MH EGKYRH");
    }

    return 0;
}

bool valid_time(int ores,int lepta,int d_lepta){
    if (0<=ores&&ores<=23&&0<=lepta&&lepta<=59&&0<=d_lepta&&d_lepta<=59){
        return TRUE;
    }else{
        return FALSE;
    }
}
