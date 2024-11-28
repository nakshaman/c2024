#include <stdio.h>
void encrypt(char *ptr){
    while(*ptr!='\0'){
        *ptr=*ptr+1;
        ptr++;
    }
}
void decrypt(char *ptr){
    while(*ptr!='\0'){
        *ptr=*ptr-1;
        ptr++;
    }
}
int main(){
    char s[]="oblti";

    // encrypt(s);
    decrypt(s);
    // printf("encrypted code is %s",s);
    printf("decrypted code is %s",s);
    return 0;
}