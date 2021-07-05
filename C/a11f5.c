#include "simpio.h"
#include "math.h"

#define CITIES 10
#define PERIODS 3

double diverge(double total_av,double values[PERIODS]);

int main(){
    double total=0;
    double temps[CITIES][PERIODS];
    //double test[10][3] = {5.6,5.8,5.8,6.9,6.5,6.8,6.4,6.3,6.2,6.5,3.2,6.5,6.3,6.2,3,3.6,3.5,3,9.6,6.9,6.8,3.2,3.2,3,6,6.5,6.5,6.4,6.4,6.7};

       for(int i=0; i<CITIES;i++){
        for (int j=0; j<PERIODS ; j++){
         printf("Please give tempertures for City: %d .Period: %d.",i,j);
         //temps[i][j]=test[i][j];
         temps[i][j] = GetReal();
         total += temps[i][j];
        }
    }
    double total_av = total/(CITIES*PERIODS);
    printf("Total average is: %.1f \n",total_av);

    for(int i=0;i<CITIES;i++){
        double city_av=0;
        double values[PERIODS];
        for(int j=0;j<PERIODS;j++){
            values[j] = temps[i][j];
            city_av += temps[i][j];
        }
        printf("City %d average temp is: %.1f and diverge is: %.1f\n",i,city_av/PERIODS,diverge(total_av,values));
    }

    return 0;
}

double diverge(double total_av,double values[PERIODS]){
    double min = values[0];
    double max = values[0];
    for(int i=0;i<PERIODS;i++){
      if(values[i]<min){
        min = values[i];
      }else if(values[i]>max){
        max = values[i];
      }
   }
   if(fabs(total_av-min)>fabs(total_av-max)){
    return fabs(total_av-min);
   }else{
    return fabs(total_av-max);
   }
}

