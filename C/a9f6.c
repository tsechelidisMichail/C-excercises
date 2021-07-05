#include "simpio.h"

void print_array(int size,int array[size]);
int calculateSales(int poss,int size,int values[size],int row,int collum,int sales[row][collum]);
int calculateProductSales(int poss,int size,int productSales[size],int row,int collum,int sales[row][collum]);
void maxArray(int *max,int *object,int size,int array[size]);

int main(){
    int values[5] = {250,150,320,210,920};

    int sales[4][5] = {{10,4,5,6,7}
                       ,{7,0,12,1,3}
                       ,{4,19,5,0,8}
                       ,{3,2,1,5,6}};
    int salesPerson[4];
    int productSale[5];
    int max,object;

    for(int i=0;i<4;i++){
        salesPerson[i] = calculateSales(i,5,values,4,5,sales);
    }
    printf("SalesMan-Sales\n");
    print_array(4,salesPerson);

    maxArray(&max,&object,4,salesPerson);
    printf("\nBest SalesMan was %d with %d sales",object,max);

    for(int i=0;i<5;i++){
        productSale[i] = calculateProductSales(i,5,productSale,4,5,sales);
    }
    printf("\nProduct-Items\n");
    print_array(5,productSale);

    maxArray(&max,&object,5,productSale);
    printf("\nBest Product was %d with %d items",object,max);

    return 0;
}

void print_array(int size,int array[size]){
    int counter = 0;
    for(int i=0;i<size;i++){
        printf("%d   %d\n",counter++,array[i]);
    }
}

int calculateSales(int poss,int size,int values[size],int row,int collum,int sales[row][collum]){
    int total=0;
    for(int j=0;j<collum;j++){
       total += values[j]*sales[poss][j];
    }
    return total;
}

int calculateProductSales(int poss,int size,int productSales[size],int row,int collum,int sales[row][collum]){
    int total=0;
    for(int i=0;i<row;i++){
        total += sales[i][poss];
    }
    return total;
}
void maxArray(int *max,int *object,int size,int array[size]){
    *max = array[0];
    for(int i=0;i<4;i++){
        if(array[i]>*max){
            *max = array[i];
            *object = i;
        }
    }
}

