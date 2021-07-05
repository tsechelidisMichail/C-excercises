#include "simpio.h"

int main(){
   int num[5];
   int temp[5];

   for (int i=0;i<5;i++){
        printf("Enter number: ");
        num[i] = GetInteger();
   }

   for (int j=0;j<5;j++){
        if(j==4){
            temp[0] = num[j];
            break;
        }
        temp[j+1]=num[j];
   }

   for (int i=0;i<5;i++){
    num[i]=temp[i];
   }

   for(int i=0;i<5;i++){
     printf("%d ",num[i]);
   }

   system("PAUSE");
   return 0;
}
