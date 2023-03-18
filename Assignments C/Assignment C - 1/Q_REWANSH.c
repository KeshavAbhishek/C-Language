#include <stdio.h>

int main(){
    int ascii=0;
    printf("Enter a character : ");
    char data;
    scanf("%c", &data);
    ascii = ("%d", data);
    if(ascii>=48 && ascii<=57){
        printf("\nYou entered a digit.");
    }
    else{
        printf("\nYou entered a character.");
    }
    return 0;
}