#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    int random_num=rand()%100+1;
    int count=0;
    int guess;
    while(1){
        printf("Enter your guess\n");
        scanf("%d",&guess);
        if(guess==random_num){
            printf("Congratulations you won in %d attempts.\n",count);
            break;
        }
        else if(guess>random_num){
            printf("Guess a smaller number\n");
            count++;
        }
        else if(guess<random_num){
            printf("Guess a bigger number\n");
            count++;
        }
    }
    return 0;
}