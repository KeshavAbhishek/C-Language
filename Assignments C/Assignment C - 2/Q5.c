// 5. WAP to all natural number from 1 to n using do while loop where 'n' should be entered by the user.

#include <stdio.h>

int main(){
    int n, i=1;
    printf("Enter a number : ");
    scanf("%d", &n);

    do
    {
        printf("%d\n", i);
        i++;
    } while (i<=n);

    return 0;
}

/*
Output

Enter a number : 10
1
2
3
4
5
6
7
8
9
10

*/