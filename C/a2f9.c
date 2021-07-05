#include <stdio.h>
#include "simpio.h"
#include <string.h>

typedef struct{
  char name[30];
  int apousies;
}studentT;

void readInput(FILE *infile,studentT students[],int *pApousies,int *pStudents);
void writeOutput(FILE *outfile,int size, studentT students[],int total);

int main()
{
    FILE *infile, *outfile;
    studentT students[100];
    int numberofStudents, numberofApousies;
    infile=fopen("i2f9.dat","r");

    if(infile==NULL){
        printf("Cannot open input file i2f9.dat");
        exit(1);
    }
    outfile=fopen("o2f9.dat","w");
    readInput(infile,students,&numberofApousies,&numberofStudents);
    writeOutput(outfile,numberofApousies,students,numberofStudents);
    fclose(infile);
    fclose(outfile);

    return 0;
}

void writeOutput(FILE *outfile,int size, studentT students[],int total)
{
    int i;
    fprintf(outfile,"%-30s%-9s\n","ONOMATEPWNYMO","APOUSIES");
    for(i=0; i<39; i++)
        fputc('-',outfile);
   fputc('\n',outfile);
    for(i=0; i<size; i++)
    {
        fprintf(outfile,"%-30s%9d\n",students[i].name,students[i].apousies);
    }
      for(i=0; i<39; i++)
        fputc('-',outfile);
    fputc('\n',outfile);
    fprintf(outfile,"%-30s%9d\n","SYNOLO MATHITWN",total);
    fprintf(outfile,"%-30s%9d\n","SYNOLO MATHITWN",size);


}

void readInput(FILE *infile,studentT students[],int *pApousies,int *pStudents)
{
    char name[30], comments[68], termch;
    int nscan, apousies,line;
    line=0;
    *pApousies=0;
    *pStudents=0;
    while(TRUE){
     nscan=fscanf(infile,"%30[^,], %d, %68[^\n]%c",name, &apousies, comments, &termch);

     if (nscan==EOF) break;
     line++;
     if (nscan!=4 || termch!='\n'){
        printf("Error in line %d. Program termination\n",line);
        exit(1);
     }
     if(apousies>100){
        students[*pApousies].apousies=apousies;
        strcpy(students[*pApousies].name,name);
        (*pApousies)++;
     }
     (*pStudents)++;
    }
}
