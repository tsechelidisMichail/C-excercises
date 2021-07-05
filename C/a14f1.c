#include <stdio.h>
#include <simpio.h>

int main()
{
    double varos,upsos,ilikia,BMR;

    printf("Dwse varos se kila: ");
    varos = GetReal();
    printf("Dwse upsos se cm: ");
    upsos = GetReal();
    printf("Dwse ilikia se xronia: ");
    ilikia = GetReal();
    BMR = 655 + (9.6*varos) + (1.8*upsos) - (4.7*ilikia);
    printf("To BRM einai: %f",BMR);

    return 0;
}
