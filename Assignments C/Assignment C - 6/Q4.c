/*
WAP to print the following pattern using indirect recursion.

                * * * * * * * * * *
                # # # # # # # # # #

Print the row of star and the row of the hash using two separate functions.
Establish indirect recursion between these two separate functions.

*/

#include <stdio.h>

void fun1(int n);
void fun2(int n);

void fun2(int n)
{
    if(n==10){printf("\n");}
    if (n == 0){return;}
    else if(n<=10){printf("# ");fun1(n-1);}
    else{printf("* ");fun1(n - 1);}
}

void fun1(int n)
{
    
    if(n==10){printf("\n");}
    if (n == 0){return;}
    else if(n<=10){printf("# ");fun2(n-1);}
    else{printf("* ");fun2(n - 1);}
}

int main()
{
    fun1(20);
    return 0;
}