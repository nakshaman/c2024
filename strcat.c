#include <stdio.h>
#include <string.h>

int main(){
    char str[20]="harry";
    char str2[30]=" aman";
    strcat(str,str2);
    printf("%s",str);
    return 0;
}