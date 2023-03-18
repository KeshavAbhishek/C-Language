#include <stdio.h>

int main()
{
    int index = 1;
    while (index <= 16)
    {
        printf("%d ", index);
        if (index % 4 == 0)
        {
            printf("\n");
        }
        index++;
    }

    return 0;
}