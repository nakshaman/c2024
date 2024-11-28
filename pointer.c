#include <stdio.h>
int main (){
    int x=7;
    int *ptr=&x;
    int **ptr2=&ptr;
    printf("%d\n",&x);
    printf("%d\n",ptr);
    printf("%d\n",&ptr);
    printf("%d\n",ptr2);
    printf("%d\n",&ptr2);
    return 0;
}