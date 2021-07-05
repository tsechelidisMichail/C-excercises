#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

#define YEARS    4
#define SUBJECTS 8

struct grades{
    int year;
    int subject;
}typedef five_to_sevenT;

void analyze_table(int row,int collum,int array[row][collum],int size,five_to_sevenT arrayT[size],int *low_counter,int *ten_counter,int *new_size);
void print_data(int size,five_to_sevenT arrayT[size],int ten_counter,int low_counter,int size_all);
int read_data(char name[],int min,int max);
void update_data(int row,int collum,int array[row][collum]);

int main() {
    int grades_table[YEARS][SUBJECTS] = {
        {5, 6, 6, 2, 8, 7, 10, 7},
        {6, 2, 3, 3, 9, 8,  3, 9},
        {6, 7, 5, 8, 6, 7, 10, 5},
        {1, 3, 3, 8, 9, 4,  3, 6}
    };
    five_to_sevenT five_to_seven_table[32];
    int low_counter;
    int ten_counter;
    int new_size;
    int size_all = YEARS*SUBJECTS;

    while(TRUE){
        low_counter=0;
        ten_counter=0;
        new_size=0;
        analyze_table(YEARS,SUBJECTS,grades_table,size_all,five_to_seven_table,&low_counter,&ten_counter,&new_size);
        print_data(new_size,five_to_seven_table,ten_counter,low_counter,size_all);
        printf("\nDo you want to update a grade?");
        int value = read_data("NO - YES:",0,1);
        if(value==1){
            update_data(YEARS,SUBJECTS,grades_table);
        }else if(value==0){
            break;
        }
    }

    return 0;
}

void analyze_table(int row,int collum,int array[row][collum],int size,five_to_sevenT arrayT[size],int *low_counter,int *ten_counter,int *new_size){
    int counter=0;
    int i=0;
    int j=0;
    for(i=0;i<row;i++){
        for(j=0;j<collum;j++){
            if(array[i][j]>=5&&array[i][j]<=7){
                arrayT[counter].year=i;
                arrayT[counter].subject=j;
                counter++;
                *low_counter+=1;
            }
            if(array[i][j]==10){
                *ten_counter+=1;
            }
        }
        *new_size=counter;
    }
}

void print_data(int size,five_to_sevenT arrayT[size],int ten_counter,int low_counter,int size_all){
    printf("5 to 7 grades:\n");
    for(int i=0;i<size;i++){
        int year = arrayT[i].year;
        int subject = arrayT[i].subject;
        printf("Year: %d, Subject: %d\n",year,subject);
    }
    printf("Count of 10s: %d\n",ten_counter);
    printf("Percentage of 10s: %.2f %%",(float) 100*ten_counter/size_all);

}

int read_data(char name[],int min,int max){
     printf("give value for %s (%d - %d)",name,min,max);
    while(TRUE){
        int value = GetInteger();
        if(value>=min&&value<=max){
           return value;
        }else{
           printf("give value for %s (%d - %d)",name,min,max);
        }
    }
}

void update_data(int row,int collum,int array[row][collum]){
    int year;
    int subject;
    int grade;
    year = read_data("year : ", 0, 3);
    subject = read_data("subject : ", 0, 7);
    grade = read_data("Grade : ", 0, 10);
    array[year][subject] = grade;
}


