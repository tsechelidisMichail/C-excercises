#include "simpio.h"

int max(int a,int b);
int gr(int a,int b,int c);

int main(){
    printf("Dwse a: ");
    int a = GetInteger();
    printf("Dwse b: ");
    int b = GetInteger();
    printf("Dwse c: ");
    int c = GetInteger();

    double y = ((2*max(a,b))+(3*gr(a,b,c)))/4;
    printf("To apotelesma einai: y=%.2f .",y);
    return 0;
}

int max(int a,int b){
    if(a<b){
        return b;
    }
    return a;
}

int gr(int a,int b,int c){
    return  max(max(a,b),max(b,c));
}
