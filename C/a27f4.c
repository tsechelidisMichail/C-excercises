#include "simpio.h"
#include "stdio.h"
#include "genlib.h"

long encode(long first_code);
bool check(long last_code);

int main(){

    printf("Give lower_limit: ");
    long lower_limit = GetLong();
    printf("Give upper_limit: ");
    long upper_limit = GetLong();

    for (long i=lower_limit; i<=upper_limit; i++){
        if (check(encode(i))){
            printf("Code: %ld Encoding: %ld isValid:yes\n",i,encode(i));
        }else{
            printf("Code: %ld Encoding: %ld isValid:no\n",i,encode(i));
        }
    }

    return 0;
}

long encode(long first_code){
    long digits = (98 - (first_code*100) % 97) % 97 ;
    long last_code = (first_code*100) + digits;
    return last_code;
}

bool check(long last_code){
    if(last_code%97==1){
       return TRUE;
    }else{
        return FALSE;
    }
}
