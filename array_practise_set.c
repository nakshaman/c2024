#include <stdio.h>
int main(){
    int arr[10];
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    int *ptr=arr;
    ptr+=2;
    if((*ptr==arr[2])){
        printf("The value of ptr+2 and arr[2] is same\n");
    }
    else{
        printf("The value of ptr+2 and o arr[2] is not same\n");
    }
    return 0;
}