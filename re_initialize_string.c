#include <stdio.h>
int main(){
    // char st[]="sanjana pandey";
    // st[]="naksh aman";
    char *ptr="sanjana pandey";
    ptr="naksh aman";
    // for(int i=0;i!='\0';i++){
    //     printf("%c",*(ptr+i));
    // }
    printf("%s",ptr);
    return 0;
}