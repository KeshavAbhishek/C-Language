#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char string[]="C_SESSION";

    // "string" - The variable contains \0 at end to show the end of string.

    for (int i = 0; i < sizeof(string)/sizeof(string[0]); i++)
    {
        printf("%c\n", string[i]);
    }

    printf("\nLength of String : %d", strlen(string));
    printf("\nIf returned %d then string is same.\n", strcmp("YES", "YES"));
    printf("%s\n", strcat(string, "_NOISSES_C"));
    printf("%s", strcpy(string, "NOISSES_C"));

    return 0;
}