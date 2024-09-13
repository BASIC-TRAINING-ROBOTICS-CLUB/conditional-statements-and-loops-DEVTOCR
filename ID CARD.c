#include<stdio.h>
#include<string.h>
struct id{
    int enroll;
    float cpi;
    float spi;
    char name[20];
    char dob[20];
    char add[50];
    int sem;
    char branch[20];
    char clg[15];
};

int main(){
    printf("Student ID card\n\n");
    struct id Dev;
    Dev.enroll=116;
    Dev.cpi=9.66;
    Dev.spi=9.73;
    Dev.sem=3;
    strcpy(Dev.branch,"IT");
    strcpy(Dev.name,"Devraj Patel");
    strcpy(Dev.clg,"R.C. Technical Institute");
    strcpy(Dev.dob, "30/11/2006");
    strcpy(Dev.add,"Taxshila,Nikol,Ahmedabad-382350");
    printf("Name : %s\n",Dev.name);
    printf("College : %s\n",Dev.clg);
    printf("Enrollment Number : %d\n",Dev.enroll);
    printf("Branch : %s\n",Dev.branch);
    printf("Semester : %d\n", Dev.sem);
    printf("DOB : %s\n",Dev.dob);
    printf("Address : %s\n",Dev.add);
    printf("SPI : %f\n",Dev.spi);
    printf("CPI : %f\n\n",Dev.cpi);
    
    
}