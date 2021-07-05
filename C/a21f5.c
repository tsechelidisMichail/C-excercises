#include "simpio.h"
#include "math.h"

int main(){
   double num[5];
   double dis[4];

   for (int i=0;i<5;i++){
     printf("Enter number (%d) :",i);
     num[i] = GetReal();
   }

   for (int j=0;j<4;j++){
     double distance = 0;
     distance = fabs(num[j]-num[j+1]);
     dis[j] = distance;
   }

   for (int i=0;i<5;i++){
      printf("%.2f ",num[i]);
   }

   printf("\n");

   for(int j=0;j<4;j++){
      printf("%.2f ",dis[j]);
   }

  return 0;
}
