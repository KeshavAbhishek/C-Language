#include <stdio.h>

int main(){
    char value='a';

    int i=0;

    for (i = 0; i < 26; i++)
    {
        printf("%c", value++);
    }
    
    return 0;
}