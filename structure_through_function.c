#include <stdio.h>
#include <string.h>
struct employee {
    int code;
    char name[20];
    float salary;
};
void func_pass(struct employee e){
    printf("The code is %d\n",e.code);
    printf("The salary is %.2f\n",e.salary);
    printf("The name is %s\n",e.name);
}
int main(){
    struct employee e1;
    e1.code=100;
    e1.salary=45000;
    strcpy(e1.name,"naksh");
    func_pass(e1);
    return 0;
}