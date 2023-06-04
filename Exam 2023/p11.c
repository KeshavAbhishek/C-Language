#include <stdio.h>
#include <string.h>

int main(){
    char string[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char *ptr;
    int stringLen = strlen(string);

    ptr = string;
    for (int i = stringLen-1; i>=0; i--)
    {
        printf("%c", *(ptr+i));
    }
    
    return 0;
}