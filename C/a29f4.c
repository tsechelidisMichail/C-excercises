#include "simpio.h"

int gcd(int a,int b);
bool checkComprime(int a,int b);
void phi(int x);

int main(){
      while(TRUE){
            printf("Dwse x: ");
            int x = GetInteger();
            if(x>0){
                phi(x);
                break;
            }else{printf("GIVE POSSITIVE N");}
        }
  return(0);
}


int gcd(int a,int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}

bool checkComprime(int a,int b){
    if(gcd(a,b)==1){
        return TRUE;
    }
    return FALSE;
}

void phi(int x){
    for (int n=1; n<=x; n++){
      int counter = 0;
      for(int i=1; i<=n; i++){
        if(checkComprime(i,n)){
            counter++;
        }
      }
      printf("phi(%d) = %d\n",n,counter);
    }
}
