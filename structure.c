#include <stdio.h>
#include <string.h>

struct employee{
    int code;
    float salary;
    char name[20];
}typedef em;

int main(){
    em e1;
    e1.code=123;
    e1.salary=26800.0; 
    strcpy(e1.name,"Sanjana");
    printf("The name of the employee is %s\n",e1.name);
    printf("The code of the employee is %d\n",e1.code);
    printf("The salary of the employee is %.2f\n",e1.salary);
    return 0;
}