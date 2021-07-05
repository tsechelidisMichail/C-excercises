#include "simpio.h"

struct Project{
    char name[60];
    int start;
    int duration;
}typedef projectT;

void ReadWorkpackages(char *name,int *start,int *duration);
projectT FindFirstWp(int size,projectT array[size]);
int FindMakespan(int size,projectT array[size]);

int main(){
    projectT WP[100];
    projectT first;
    int makespan=0;

    printf("Give how many WP projects: ");
    int numberOfwp = GetInteger();

    for(int i=0;i<numberOfwp;i++){
        ReadWorkpackages(WP[i].name,&WP[i].start,&WP[i].duration);
    }

    first = FindFirstWp(numberOfwp,WP);
    printf("\nFIRST WP: %s start: %d duration: %d",first.name,first.start,first.duration);

    makespan = FindMakespan(numberOfwp,WP);
    printf("\nTotal duration = %d",makespan);

    return 0;
}

void ReadWorkpackages(char *name,int *start,int *duration){
    printf("WP Name: ");
    scanf("%s",name);
    scanf("/n",NULL);
    printf("WP Start Month: ");
    *start = GetInteger();
    printf("WP Duration: ");
    *duration = GetInteger();
}

projectT FindFirstWp(int size,projectT array[size]){
    projectT first;
    first=array[0];
    for(int i=0;i<size;i++){
        if(array[i].start<first.start){
            first = array[i];
            printf("!!%s!!",first.name);
        }
    }
printf("!!%s!!",first.name);
    return first;
}

int FindMakespan(int size,projectT array[size]){
    int makesspan=0;
    for(int i=0;i<size;i++){
        if(array[i].start+array[i].duration>makesspan){
            makesspan = array[i].start+array[i].duration;
        }
    }
    return makesspan;
}
