// "string" - The variable contains \0 at end to show the end of string.

#include <stdio.h>
#include <strings.h>

int main(){
    char str[] = "Turbo C";
    printf("\nString is : %s\n\n", str);
    puts(str);
    return 0;
}