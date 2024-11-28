#include <stdio.h>

void pass(int *ptr,int n);

int main (){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    pass(arr,n);
    return 0;
}

void pass(int *ptr,int n){
    for(int i=0;i<n;i++){
        printf("The value at index %d is %d \n",i+1,(*ptr));
        ptr++;
    }
}