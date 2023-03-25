// WAP to input a 4 X 4 matrix and print the diagonal elements.

#include <stdio.h>

int main(){
    int arr[4][4], sum=0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Enter the value for index (%d, %d) : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int  j = 0; j < 4; j++)
        {
            if(i==j){
                printf("%d", arr[i][j]);
            }
            else{
                printf("\t");
            }
        }
        printf("\n");
    }

    return 0;
}

/*
Enter the value for index (0, 0) : 1
Enter the value for index (0, 1) : 2
Enter the value for index (0, 2) : 3
Enter the value for index (0, 3) : 4
Enter the value for index (1, 0) : 5
Enter the value for index (1, 1) : 6
Enter the value for index (1, 2) : 7
Enter the value for index (1, 3) : 8
Enter the value for index (2, 0) : 9
Enter the value for index (2, 1) : 10
Enter the value for index (2, 2) : 11
Enter the value for index (2, 3) : 12
Enter the value for index (3, 0) : 13
Enter the value for index (3, 1) : 14
Enter the value for index (3, 2) : 15
Enter the value for index (3, 3) : 16
1
        6
                11
                        16
*/