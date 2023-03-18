#include <stdio.h>

int main()
{
    int n;
    n = 1;
    switch (n)
    {
    case 1:
        printf("n = 1");
        break;

    case 2:
        printf("n = 2");
        break;
    default:
        printf("DEFAULT");
        break;
    }
    return 0;
}