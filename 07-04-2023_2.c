#include <stdio.h>
#include <string.h>

void nameAge(char name[1000], int age){
    printf("\nName :- %s\nAge :- %d", name, age);
}

int main(){
    int age;
    char name[1000];
    printf("Enter Name : ");
    scanf("%s", &name);
    printf("Enter age : ");
    scanf("%d", &age);
    nameAge(name, age);

    return 0;
}