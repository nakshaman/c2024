#include <stdio.h>
int factorial(int x){
    if(x==1 || x==0){
        return 1;
    }
    else{
        return x*factorial(x-1);
    }
}
int main(){
    int num;
    scanf("%d",&num);
    int ans=factorial(num);
    printf("%d\n",ans);
    return 0;
}