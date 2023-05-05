// 4. Write a program in C to count the total number of words in a string.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int countWord = 0;
    char value[100]={};

    printf("Enter a sting : ");
    gets(value);

    int i = 0;
    while (value[i]!='\0')
    {
        if(value[i]==' '){
            countWord += 1;
        }

        i++;
    }

    printf("Number of words in string : %d", countWord+1);
    
    return 0;
}