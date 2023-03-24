// WAP to enter marks of a student and find percentage of marks using array.

#include<stdio.h>
int main(){
   int arr1[5];
   float sum=0;
   printf("Enter marks of 5 subject out of 100:-\n");
   for (int i = 0; i < 5; i++)
   {
      scanf("%d",&arr1[i]);
   }
   for (int i = 0; i < 5; i++)
   {
      sum=sum+arr1[i];
   }
   printf("The marks obtained by student is %.2f %%",(sum/5));
   
   return 0;
}

/*
Enter marks of 5 subject out of 100:-
85
95
75
99
97
The marks obtained by student is 90.20 %
*/