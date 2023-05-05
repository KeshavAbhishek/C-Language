// 5. WAP to take input two string and check whether they are anagrams or not.

#include <stdio.h>
#include <string.h>

int main(){

    char str1[100];
    char str2[100];
    int cnt = 0;
    
    printf("Enter string 1 : ");
    scanf("%s", &str1);

    printf("Enter string 2 : ");
    scanf("%s", &str2);

    int i = 0;
    int j = 0;
    if(strlen(str1)==strlen(str2)){
        while (str1[i]!='\0')
        {
            while (j<strlen(str2))
            {
                if(str1[i]==str2[j]){
                    cnt += 1;
                }
                j++;
            }
            j = 0;
            
            i += 1;
        }
    }

    if(cnt == strlen(str1)){
        printf("Entered strings are anagrams.");
    }
    else{
        printf("Entered strings are not anagrams.");
    }
    
    return 0;
}