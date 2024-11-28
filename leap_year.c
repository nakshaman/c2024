#include <stdio.h>
int main(){
    int year;
    int no=0;
    scanf("%d",&year);
    if(year%4==0){
        if(year%100==0){
            if(year%400==0){
                printf("Leap Year\n");
                no=1;
            }
        }
    }
    if(no==0){
        printf("This is not a leap year\n");
    }
    return 0;
}