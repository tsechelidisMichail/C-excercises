#include "simpio.h"
#include "string.h"

#define NAME_LENGHT 15
#define DATABASE_SIZE 20

struct car_rent{

    int rent_number;
    char car_name[NAME_LENGHT];
    int cc;
    char person_name[NAME_LENGHT];
    int rent_days;
    float price;

}typedef rent;

int main(){
    rent data[DATABASE_SIZE];

    int rents;
    printf("Dose ton arithmo ton enoikiaseon: ");
    rents = GetInteger();
    printf("\n");

    for(int i=0;i<rents;i++){
        printf("Dose ta stoixeia tis enoikiasis %d\n",i);
        data[i].rent_number = i;

        printf("Dose marka: ");
        gets(data[i].car_name);
        printf("Dose kyvika: ");
        data[i].cc = GetInteger();
        printf("Dose onoma pelati: ");
        gets(data[i].person_name);
        printf("Dose imeres enoikiasis: ");
        data[i].rent_days = GetInteger();
        printf("Dose timi ana imera: ");
        data[i].price = GetReal();
    }

    printf("Number   Name            Type     CC     Days   Price  Total");
    printf("\n------------------------------------------------------------\n");
    float alltotal;
    alltotal = 0;
    float maxtotal=0;
    int counter=0;
    for(int i=0;i<rents;i++){
        float total = data[i].price*data[i].rent_days;
        printf("%d        ",data[i].rent_number);
        printf("%s              ",data[i].person_name);
        printf("%s         ",data[i].car_name);
        printf("%d       ",data[i].cc);
        printf("%d       ",data[i].rent_days);
        printf("%f       ",data[i].price);
        printf("%f    \n",total);

        alltotal +=total;
        if(total>maxtotal){
            maxtotal=total;
            counter = i;
        }
    }
        printf("\n------------------------------------------------------------");
        printf("\n                                                          %f",alltotal);

        printf("\nBest car: %s   %d rented for %f Euros.",data[counter].car_name,data[counter].cc,maxtotal);


     return 0;
}
