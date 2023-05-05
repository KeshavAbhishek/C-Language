#include <stdio.h>
// #include <string.h>

int main(){
    char value[1000];

    printf("Enter a string  (no white space) : ");
    scanf("%s", &value);

    int flag = 0;

    int k=0;

    while (value[k]!='\0'){k += 1;}
    
    for (int i = 0; i < k; i++)
    {
        if(value[k-i-1]==value[i]){
            printf("%d %d\n", k-i-1, i);
        }
        else{
            flag = 1;
        }
    }
    
    if(flag==0){
        printf("String is pallindrome.");
    }
    else{
        printf("String is not pallindrome.");
    }
    
    return 0;
}