#include "simpio.h"
#include "math.h"

int Sum_Cube(int i);
bool IsArmstrong(int i);

int main(){
    for (int i=1; i<=999; i++){
        if (IsArmstrong(i)){
        printf("%d\n",i);
       }
    }

    return 0;
}

int Sum_Cube(int i){
    int x=i/100;
    int y=(i/10)%10;
    int z=i%10;

    return (pow(x,3)+pow(y,3)+pow(z,3));
}

bool IsArmstrong(int i){
    if(Sum_Cube(i)==i){
        return TRUE;
    }else{
        return FALSE;
    }
}
