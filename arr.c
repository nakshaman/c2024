#include <stdio.h>
int main (){
    int mark[5];
    // int sum=0;
    printf("Enter 5 marks\n");
    for(int i=0;i<5;i++){
        scanf("%d",&mark[i]);
    }
    for(int i=0;i<5;i++){
        printf("The value element is %d\n",mark[i]);
    }

    return 0;
}