#include "simpio.h"
#include "ctype.h"
#include "string.h"

#define SIZE 100

int main(){
    char string[SIZE];
    int count =0;
    int permision = 0;

    printf("Insert a string: ");
    gets(string);
    for(int j=0;j<strlen(string);j++){

        if(string[j] >= '0' && string[j] <= '9'){
                permision = 1;
        }else{
        printf("error");permision = 0;
        break;
        }
    }
if(permision==1){
    for(int i=0;i<strlen(string);i++){
        printf(" %d",string[i]-48);
        count += string[i]-48;
        if(i==strlen(string)-1){
                 break;
        }
        printf(" +");
    }
        printf(" = %d",count);
}
    return 0;
}
