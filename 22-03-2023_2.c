#include <stdio.h>

int main()
{
    printf("For array 1\n\n");

    int array1[3][3] = {};
    int array2[3][3] = {};
    int result[3][3] = {};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter value : ");
            scanf("%d", &array1[i][j]);
        }
    }

    printf("\n\nFor array2\n\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter value : ");
            scanf("%d", &array2[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            result[i][j] = array1[i][j] + array2[i][j];
        }
    }

    printf("\n");
    
    for (int i = 0; i < 3; i++)
    {
        printf("    {");
        for (int j = 0; j < 3; j++)
        {
            printf(" %d ", result[i][j]);
        }
        printf("}");
        printf("\n");
    }

    return 0;
}