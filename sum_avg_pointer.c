#include <stdio.h>
void sum_and_avg(int *x,int *y,int *sum,int *avg){
    (*sum)=(*x)+(*y);
    (*avg)=(*sum)/2;
}
int main (){
    int sum,avg;
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    sum_and_avg(&x,&y,&sum,&avg);
    printf("The sum of the number is %d and the avergae is %d\n",sum,avg);
    return 0;
}