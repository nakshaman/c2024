#include <stdio.h>
int main (){
    char c;
    scanf("%c",&c);
    if(c>=97 && c<=122){
        printf("lowercase\n");
    }
    else{
        printf("Not lowercase\n");
    }
    return 0;
}