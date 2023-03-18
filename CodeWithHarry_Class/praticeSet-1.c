#include <stdio.h>

int Q1_Q2(){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    printf("\nMultiplication table of %d\n\n", n);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", n, i, n*i);
    }

    printf("\n\n");

    for (int i = 10; i >= 1; i--)
    {
        printf("%d X %d = %d\n", n, i, n*i);
    }

    return 0;
}

int Q5(){
    int i=1;
    int n=0;
    while (i<=10)
    {
        n+=i;
        i++;
    }
    printf("\nSum of 1st 10 natural numbers : %d", n);
    
    return 0;
}

int Q6(){
    int n=0;
    for (int i = 1; i <= 10; i++)
    {
        n+=i;
    }
    printf("\n\nUsing for loop\nSum of 1st 10 natural numbers : %d", n);

    n=0;
    int i=0;
    do{
        n+=i;
        i++;
    } while (i<=10);

    printf("\n\nUsing 'do-while loop'\nSum of 1st 10 natural numbers : %d", n);

    return 0;
}

int Q7(){
    int n=8, count=0;
    for (int i = 1; i <= 10; i++)
    {
        count += (n*i);
        printf("%d X %d = %d\n", n, i, n*i);
    }
    printf("\n8 X 1 = 8, 8 X 2 = 16, ...., 8 X 10 = 80.\n\nSUM : %d", count);

    return 0;
}

int Q8(){
    int n, fact=1;
    printf("\n\nEnter a number whose factorial need to be calculated : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    printf("Using 'for loop' -> Factorial : %d\n", fact);

    return 0;
    
}

int Q9(){
    int n=0,i=0;
    printf("\n\nEnter a number whose factorial need to be calculated : ");
    scanf("%d", &n);
    i = n;
    n--;
    while (n>=1){
        i = i*n;
        n--;
    }
    printf("Using 'while loop' --> Factorial : %d\n", i);

    return 0;
}

int Q10(){
    int n, count=0, n2=0;
    printf("\nEnter a number : ");
    scanf("%d", &n);
    n2 = n;
    for (int i = 2; i <= n; i++)
    {
        if(n2%i==0){
            count++;
        }
    }

    if(count==1){
        printf("%d is a prime number.\n", n2);
    }
    else{
        printf("%d is not a prime number.\n", n2);
    }

    return 0;
}

int Q11(){
    int n, i=2, n2=0, count=0;
    printf("\nEnter a number : ");
    scanf("%d", &n);

    n2 = n;

    while (i<=n)
    {
        if(n%i==0){
            count++;
        }
        i++;
    }

    printf("\nUsing 'while' loop\n");
    if(count==1){
        printf("%d is a prime number.\n", n);
    }
    else{
        printf("%d is not a prime number.\n", n);
    }

    i = 2;
    count = 0;

    do
    {
        if(n2%i==0){
            count++;
        }
        i++;
    } while (i<=n2);
    
    printf("\nUsing 'do-while' loop\n");
    if(count==1){
        printf("%d is a prime number.\n", n);
    }
    else{
        printf("%d is not a prime number.\n", n);
    }

    return 0;
    
}

int main(){

    int choice=0;
    printf("1. Run Q1_Q2\n2. Run Q5\n3. Run Q6\n4. Run Q7\n5. Run Q8\n6. Run Q9\n7. Run Q10\n8. Run Q11\n\nEnter a number : ");
    scanf("%d", &choice);

    printf("Choice : %d\n\n", choice);

    if(choice==1){Q1_Q2();}
    else if(choice==2){Q5();}
    else if(choice==3){Q6();}
    else if(choice==4){Q7();}    
    else if(choice==5){Q8();}
    else if(choice==6){Q9();}
    else if(choice==7){Q10();}
    else if(choice==8){Q11();}
    return 0;
}