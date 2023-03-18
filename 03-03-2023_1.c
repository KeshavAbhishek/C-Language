#include <stdio.h>

int main()
{
    // switch (expression)
    // {
    // case /* constant-expression */:
    //     /* code */
    //     break;

    // default:
    //     break;
    // }

    int cases = 0;
    float res;
    printf("\n1. Add\n2. Sub\n3. Multiply\n4. Divide\n\nEnter choice : ");
    scanf("%d", &cases);
    float num1, num2;
    printf("Enter 1st number : ");
    scanf("%f", &num1);
    printf("Enter 2nd number : ");
    scanf("%f", &num2);
    switch (cases)
    {
    case 1:
        {
            res = num1+num2;
            printf("Sum = %f", res);
            break;
        }
    case 2:
        {
            res = num1-num2;
            printf("Sub = %f", res);
            break;
        }
    case 3:
        {
            res = num1*num2;
            printf("Multiply = %f", res);
            break;
        }
    case 4:
        {
            res = (num1/num2);
            printf("Divide = %f", res);
            break;
        }
    }
    return 0;
}