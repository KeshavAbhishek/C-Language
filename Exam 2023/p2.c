// Adam Number

#include <stdio.h>

int square(int num) {
    return num * num;
}

int reverse(int num) {
    int rev = 0;
    while (num > 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return rev;
}

int isAdamNumber(int num) {
    int squareNum = square(num);
    int squareRevNum = square(reverse(num));
    return (squareRevNum == reverse(squareNum));
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isAdamNumber(num)) {
        printf("%d is an Adam number.\n", num);
    } else {
        printf("%d is not an Adam number.\n", num);
    }

    return 0;
}

/*
Enter a number: 12
12 is an Adam number.
*/