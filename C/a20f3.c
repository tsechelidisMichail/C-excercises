#include "simpio.h"


int main(){
    printf("Dwse ilikia: ");
    int ilikia = GetInteger();
    int max = ilikia;
    int min = ilikia;
    while(ilikia!=-1){
        printf("Dwse ilikia: ");
            ilikia = GetInteger();
            if (ilikia>max &&ilikia!=-1){
                max=ilikia;
            }else if(ilikia<min &&ilikia!=-1){
                min=ilikia;
            }
    }
  printf("H megaliteri ilikia einai: %d\n",max);
  printf("H mikroteri ilikia einai: %d",min);

  return 0;
}

