// String palindrome

#include <stdio.h>
#include <string.h>

int main(){
    char str[]="madam";
    int stringLen = strlen(str), cnt = 0;

    for (int i = 0; i < stringLen/2; i++)
    {
        if(str[i]==str[stringLen-1-i]){
            cnt++;
        }
    }
    
    if(cnt == stringLen/2){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
    
    return 0;
}

/*
Palindrome
*/