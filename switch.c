// #include <stdio.h>
// int main(){
//     int rating;
//     printf("Enter the rating ");
//     scanf("%d",&rating);
//     switch (rating){
//         case 1:
//             printf("Your rating is 1\n");
//             break;
//         case 2:
//             printf("Your rating is 2\n");
//             break;
//         case 3:
//             printf("Your rating is 3\n");
//             break;
//         case 4:
//             printf("Your rating is 4\n");
//             break;
//         default:
//         printf("Your score didn't found\n");
//         break;
//     }
//     return 0;
// }

#include <stdio.h>
int main(){
    int marks;
    scanf("%d",&marks);
    switch (marks)
    {
    case (marks>=60 && marks<70):
        printf("D");
    case (marks>=70 && marks<80):
        printf("C");
    case (marks>=80 && marks<90):
        printf("B");
    case (marks>=90 && marks<=100):
        printf("A");
    }
    return 0;
}