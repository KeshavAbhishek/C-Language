#include <stdio.h>
#include <string.h>

int main(){
    char string[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char *ptr;
    int stringLen = strlen(string);

    ptr = string;
    for (int i = 0; i < stringLen; i++)
    {
        printf("%c", *(ptr+stringLen-i-1));
    }
    
    return 0;
}