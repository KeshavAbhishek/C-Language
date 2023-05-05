#include <stdio.h>
#include <string.h>

int main(){
    char str[20];
    printf("\nEnter string : ");
    scanf("%s", &str);

    puts(str);
    printf("%c%c%c", "KYA"[0], "KYA"[2], "KYA"[1]);
    printf("\n\n");

    char str1[]="Turbo ";
    char str2[]="Compiler";

    strcat(str1,str2);
    printf("\nStr1 has : %s\n%p", str1, &str1);

    strcpy(str1,str2);
    printf("\n\nStr1 has : %s\n%p", str1, &str1);
    return 0;
}