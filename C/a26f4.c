#include "simpio.h"

int f(int x);
int g(int x,int y);

int main(){

    printf("Enter x: ");
    int x = GetInteger();
    printf("Enter y: ");
    int y = GetInteger();

    printf("f(x) = f(%d) = %d\n",x,f(x));
    printf("g(x,y) = g(%d,%d) = %d\n",x,y,g(x,y));
    printf("f(g(x,y)) = f(%d) = %d\n",g(x,y),f(g(x,y)));

    return 0;
}


int f(int x){
    if(x>0){
        return x+2;
    }else{
        return 7-(3*x);
    }
}

int g(int x,int y){
    if(x>0&&y>0){
        return x-y;
    }else{
        return (7*x)-5;
    }
}
