#include "simpio.h"
#include "math.h"

long long GetLongLong(void);

int main(){

    printf("Enter credit card: ");
    long long credit = GetLongLong();
     if((credit<pow(10,15))||(credit>((long long)pow(10,16)-1))){
        printf("\n %lld IS INVALID---",credit);
     }else{

    long long num[16];
    long long final_array[16];

    for (int i=0;i<16;i++){
        if(i==15){
            num[15] = credit / 10;
        }
        num[i] = credit % 10;
        credit /= 10;
    }

    for(int j=0;j<16;j++){
        final_array[j] = num[15-j];
    }
    for(int j=0;j<16;j++){
        printf("%lld",final_array[j]);
    }

    if (final_array[0]>=4&&final_array[0]<=7){
        for(int j=0;j<16;j=j+2){
           int digit1=0;
           int digit2=0;
           digit1 = (2*final_array[j])%10;
           if(final_array[j]*2>=10){
            digit2 = 1;
           }
           final_array[j] = digit1+digit2;
        }
        int count=0;
        for(int i=0;i<16;i++){
            count+=final_array[i];
        }
        if(count%10==0){
            printf("\n IS VALID");
        }else{
            printf("\n IS INVALID+++");
        }
    }else{
        printf("\n IS INVALID!!!");
    }
     }
    return 0;
}

long long GetLongLong(void)
{
 string line;
 long long value;
 char termch;
 while (TRUE) {
 line = GetLine();
 switch (sscanf(line, " %lld %c", &value, &termch)) {
 case 1:
 FreeBlock(line);
 return (value);
 case 2:
 printf("Unexpected character: '%c'\n", termch);
 break;
 default:
 printf("Please enter an integer\n");
 break;
 }
 FreeBlock(line);
 printf("Retry: ");
 }
}
