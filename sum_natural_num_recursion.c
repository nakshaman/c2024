#include <stdio.h>
int sum(int n){
    if(n==1){
        return n;
    }
    else{
        return n + sum(n-1);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int ans=sum(n);
    printf("%d\n",ans);
    return 0;
}