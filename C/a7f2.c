#include "simpio.h"

void perYear();
void perWeek();

int main(){

    printf("Dwse ton kwdiko:  ");
    long employee_code = GetLong();
    if (employee_code>=1000){
        perYear();
    }else {perWeek();}

    return 0;
}

void perYear(){
    printf("Dwse ton ethsio mistho:  ");
    double year_salary = GetReal();

    double weekly_salary = year_salary/52;
    printf("H ebdomadiaia amoibh einai: %f",weekly_salary);
}

void perWeek(){
    printf("Dwse tis wres ebdomadiaias ergasias:  ");
    int hours_Perweek = GetInteger();
    printf("Dwse thn amibh ana wra:  ");
    double salary_Perhour = GetReal();

    double weekly_salary = hours_Perweek*salary_Perhour;
    if(hours_Perweek>40){
        weekly_salary = weekly_salary + 0.5*salary_Perhour*(hours_Perweek-40);
        printf("H ebdomadiaia amoibh einai: %f",weekly_salary);
    }else{printf("H ebdomadiaia amoibh einai: %f",weekly_salary);}
}

