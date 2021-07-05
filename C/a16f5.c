#include "simpio.h"
#include <stdlib.h>

void populate(int size,int array[size]);
void print_array(int size,int array[size]);
void checkTable(int N,int size,int array[size]);

int main(){
    int array[50];
    printf("Give number from 0 to 9 : ");
    int N = GetInteger();

    populate(50,array);
    print_array(50,array);
    checkTable(N,50,array);

    return 0;
}

void populate(int size,int array[size]){
    for(int i=0;i<size;i++){
        array[i]=rand() % 10;
    }
}

void print_array(int size,int array[size]){
    for(int i=0;i<size;i++){
        printf("%d ",array[i]);
    }
}

void checkTable(int N,int size,int array[size]){
    int counter = 0;
    int c[size];
    for(int i=0;i<size;i++){
        if(array[i]==N){
            c[counter]=i;
            counter++;
        }
    }

    printf("\n Number %d is appeared %d times!",N,counter);
    printf("\n At positions: \n ");
    for(int i=0;i<counter;i++){
        printf("%d ",c[i]);
    }
}

