#include "simpio.h"

#define N 5

struct Person {
   int  gender;
   int  weight;
   int  height;
   int  age;
}typedef person;

void readData(int size,person array[size]);
void FindMean(int *man_counter,int *woman_counter,person *sum_man,person *sum_woman,person per);

int main(){

    person persons[N];
    person sum_man = {0,0,0,0};
    person sum_woman = {1,0,0,0};
    int man_counter = 0;
    int woman_counter = 0;

    readData(N,persons);

    for(int i=0;i<N;i++){
        FindMean(&man_counter,&woman_counter,&sum_man,&sum_woman,persons[i]);
    }
    printf("Mesos oros barous andrwn: %.1f\n",(float)sum_man.weight/man_counter);
    printf("Mesos oros barous gynaikwn: %.1f\n\n",(float)sum_woman.weight/woman_counter);

    printf("Mesos oros ypsous andrwn: %.1f\n",(float)sum_man.height/man_counter);
    printf("Mesos oros ypsous gynaikwn: %.1f\n\n",(float)sum_woman.height/woman_counter);

    printf("Mesos oros hlikias andrwn: %.1f\n",(float)sum_man.age/man_counter);
    printf("Mesos oros hlikias gynaikwn: %.1f\n",(float)sum_woman.age/woman_counter);

    return 0;
}

void readData(int size,person array[size]){
    /*int gender[5] = {0,1,1,0,1};
    int weight[5] = {90,65,93,65,45};
    int height[5] = {180,160,160,160,170};
    int age[5] = {40,42,35,25,37};*/
    for(int i=0;i<size;i++){
        printf("Dwse fylo: ");
        array[i].gender = GetInteger();
        //array[i].gender = gender[i];
        printf("Dwse baros: ");
        array[i].weight = GetInteger();
        //array[i].weight = weight[i];
        printf("Dwse ypsos: ");
        array[i].height = GetInteger();
        //array[i].height = height[i];
        printf("Dwse ilikia: ");
        array[i].age = GetInteger();
        //array[i].age = age[i];
        printf("----\n");
    }
}

void FindMean(int *man_counter,int *woman_counter,person *sum_man,person *sum_woman,person per){
    if(per.gender==0){
       person temp = *sum_man;
       temp.weight += per.weight;
       temp.height += per.height;
       temp.age += per.age;
       *sum_man = temp;
       *man_counter+=1;
    }else{
       person temp = *sum_woman;
       temp.weight += per.weight;
       temp.height += per.height;
       temp.age += per.age;
       *sum_woman = temp;
       *woman_counter+=1;
    }
}
