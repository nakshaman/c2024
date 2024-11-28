// #include <stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     for(int i=1;i<=10;i++){
//         printf("%d x %d = %d\n",n,i,n*i);
//     }
//     return 0;
// }
// reverse order multiplication table of 10
// #include <stdio.h>
// int main(){
//     int n=10;
//     for(int i=10;i>=1;i--){
//         printf("%d x %d = %d\n",n,i,n*i);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int sum=0,i=1;
//     while(i<=10){
//         sum+=i;
//         i++;
//     }
//     printf("%d\n",sum);
//     return 0;
// }


#include <stdio.h>
int main(){
    int sum=0;
    for(int i=1;i<=10;i++){
        sum+=8*i;
    }
    printf("%d\n",sum);
    return 0;
}