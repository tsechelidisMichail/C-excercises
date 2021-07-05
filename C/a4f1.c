#include <stdio.h>
#include <simpio.h>

long purchaseAmount;
double saleAmount;
double profit;
int rate;

int main()
{
    printf("Dwse thn katharh axia: ");
    purchaseAmount = GetLong();
    printf("Dwse to pososto kerdous: ");
    rate = GetInteger();
    saleAmount=purchaseAmount*(1+rate/100.0);
    profit = saleAmount-purchaseAmount;
    printf("To kerdos einai: %f\n",profit);
    printf("To synoliko poso einai: %f",saleAmount);

    return 0;
}
