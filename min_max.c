#include <stdio.h>
int main (){
    int arr[5];
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    int minn=0;
    for(int i=0;i<n;i++){
        if(minn>arr[i]){
            minn=arr[i];
        }
    }
    int maxx=0;
    for(int i=0;i<n;i++){
        if(maxx<arr[i]){
            maxx=arr[i];
        }
    }
    printf("%d\n",minn);
    printf("%d\n",maxx);
    return 0;
}