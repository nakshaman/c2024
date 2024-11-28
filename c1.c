#include <stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    printf("%f",(sum/n));
    return 0;
}