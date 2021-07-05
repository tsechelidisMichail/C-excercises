#include "simpio.h"

struct Box{
    int width;
    int height;
    int depth;
    int area;
    int volume;
}typedef boxT;

boxT giveData(void);
void calc_area(int *area,boxT box);
void calc_volume(int *volume,boxT box);

int main(){
    boxT box = giveData();
    calc_area(&box.area,box);
    calc_volume(&box.volume,box);
    printf("To emvadon tou koutiou einai %d cm2",box.area);
    printf("\nO ogkos tou koutiou einai %d cm3",box.volume);

    return 0;
}

boxT giveData(void){
    boxT temp;

    printf("Dose to mikos tou koutiou se cm:");
    temp.width = GetInteger();
    printf("Dose to ypsos tou koutiou se cm:");
    temp.height = GetInteger();
    printf("Dose to vathos tou koutiou se cm:");
    temp.depth = GetInteger();

    return temp;
}

void calc_area(int *area,boxT box){
    *area = 2*(box.width*box.depth + box.width*box.height + box.depth*box.height);
}

void calc_volume(int *volume,boxT box){
    *volume = box.width*box.depth*box.height;
}
