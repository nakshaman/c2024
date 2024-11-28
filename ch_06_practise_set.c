#include <stdio.h>
void adress(int *x){
    printf("The adress of x is %d\n",&x);
}
int main(){
    int x=6;
    int *ptr=&x;
    printf("The adress of x is %d\n",&x);
    adress(&x);
    return 0;
}