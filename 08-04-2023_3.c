#include <stdio.h>
// #include <stdlib.h>

int sumTwo(int, int);

char name[1000]="KESHAV"; // Here name is global variable

int main(){
    int num1, num2; //Local variable
    printf("Enter numbers : ");
    scanf("%d %d", &num1, &num2);
    printf("%d + %d = %d", num1, num2, sumTwo(num1, num2));
    // system("python Phy_Exp.py");
    return 0;
}

int sumTwo(int a, int b){
    // Here a and b are local variable
    printf("%s\n", name);
    name[1000] = "ABHISHEK";
    return a+b;
}