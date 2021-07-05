#include <stdio.h>
#include <simpio.h>

int main()
{
    int workHour;
    long salaryHour;
    double holdsRate,holds,mixedSalary,clearSalary;

    printf("Dwse ton arithmo twn wrwn: ");
    workHour = GetInteger();
    printf("Dwse thn wriaia antimisthia: ");
    salaryHour = GetLong();
    printf("Dwse to pososto twn krathsewn: ");
    holdsRate = GetReal();

    clearSalary = workHour*salaryHour;
    holds = clearSalary*holdsRate;
    mixedSalary = clearSalary + holds;

    printf("Oi akatharistes apodoxes einai: %f\n",mixedSalary);
    printf("Oi krathseis einai: %f\n",holds);
    printf("Oi kathares apodoxes einai: %f\n",clearSalary);

    return 0;
}
