#include "simpio.h"
#include <stdlib.h>

#define ROWS 10
#define COLLUMS 10

void populate_data(int R,int C,int *A);
void print_array(int R,int C,int *A);
void change_array(int R,int C,int *A);

int main(){
    int *A = (int *) malloc(ROWS*COLLUMS);
    printf("Dwse ton arithmo twn grammwn: ");
    int R = GetInteger();
    printf("Dwse ton arithmo twn sthlwn: ");
    int C = GetInteger();

    populate_data(R,C,A);
    printf("Original Array");
    print_array(R,C,A);
    change_array(R,C,A);
    printf("\nChanged Array");
    print_array(R,C,A);

    free(A);
    return 0;
}

void populate_data(int R,int C,int *A){
    for (int i=0;i<R*C;i++){
            A[i] = (rand()%100);
    }
}

void print_array(int R,int C,int *A){
    for (int i=0;i<R*C;i++){
       if(i%C==0){
        printf("\n");
       }
       printf("%d ",A[i]);
    }
}

void change_array(int R,int C,int *A){
    int max = A[0];
    for (int i=0;i<R*C;i++){
        if(i%C==0){
           max = A[i];
        }
        if(i%C==C-1){
            for(int j=(i%R)*C;j<((i%R)*C)+C;j++){
                if(A[j]<max){
                   A[j] = max;
                }else if(A[j]==max){
                    break;
                }
            }
        }
        if(A[i]>max){
            max = A[i];
        }
    }
}
