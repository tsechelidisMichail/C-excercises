#include "simpio.h"

void giveValues(int *max,int *min,int size,int array[size]);
void maxMin(int *max,int *min,int value);

int main(){
    int number[100];
    int min,max;

    printf("Enter the elements of the array, one per line\nUse -1 to signal the end of the list\n");
    giveValues(&max,&min,100,number);
    printf("The range of values is %d-%d",min,max);

    return 0;
}

void giveValues(int *max,int *min,int size,int array[size]){
    int counter = 0;
    int min1 = array[0];
    int max1 = 0;
    int i;
    while(TRUE){
        printf("? ");
        i = GetInteger();
        if((i==-1)||(counter==size-1)){
           break;
        }
        array[counter] = i;
        maxMin(&max1,&min1,array[counter]);
        *max = max1;
        *min = min1;
        counter++;
    }
}

void maxMin(int *max,int *min,int value){
    if(value<*min){
        *min = value;
    }else if(value>*max){
        *max = value;
    }
}
