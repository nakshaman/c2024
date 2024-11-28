// #include <stdio.h>
// int main(){
//     int arr[3][2]={{1,4},{7,9},{11,22}};
//     printf("%d",*(arr[0]+5));
//     return 0;
// }
// #include <stdio.h>
// int main(){
//     int arr[10];
//     int n;
//     scanf("%d",&n);
//     for(int i=0;i<10;i++){
//         arr[i]=n*(i+1);
//     }
//     for(int i=0;i<10;i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }


// #include <stdio.h>

// void reverse(int arr[],int n){
//     for(int i=0;i<(n/2);i++){
//         int temp=arr[i];
//         arr[i]=arr[n-i-1];
//         arr[n-i-1]=temp;
//     }
// }

// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     reverse(arr,n);
//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }



// #include <stdio.h>
// int count_positive(int arr[],int n){
//     int count=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]>0){
//             count++;
//         }
//     }
//     return count;
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     int ans = count_positive(arr,n);
//     printf("%d\n",ans);
//     return 0;
// }


// #include <stdio.h>
// int main(){
//     int arr[3][10];
//     int a,b,c;
//     scanf("%d",&a);
//     scanf("%d",&b);
//     scanf("%d",&c);

//     for(int i=0;i<10;i++){
//         arr[0][i]=a*(i+1);
//     }
//     for(int i=0;i<10;i++){
//         arr[1][i]=b*(i+1);
//     }
//     for(int i=0;i<10;i++){
//         arr[2][i]=c*(i+1);
//     }
//     for(int i=0;i<10;i++){
//         printf("%d %d %d \n",arr[0][i],arr[1][i],arr[2][i]);
//     }
//     return 0;
// }


#include <stdio.h>
int main(){
    int arr[1][2][3];
    for(int i=0;i<1;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<3;k++){
                printf("%d ",&arr[i][j][k]);
            }
        }
    }
    return 0;
}