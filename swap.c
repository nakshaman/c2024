#include <stdio.h>
void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
int main (){
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    printf("The value of x and y before swap %d %d\n",x,y);
    swap(&x,&y);
    printf("The value of x and y after swap %d %d\n",x,y);
    return 0;
}