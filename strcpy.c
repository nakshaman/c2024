#include <stdio.h>
#include <string.h>
int main(){
    char st[]="this";
    char st2[30];
    strcpy(st2,st);
    printf("%s",st2);
    return 0;
}