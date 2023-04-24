// 4. Write a C program to copy one array to another using pointers.

#include <stdio.h>

int main() {
   int arr1[100], arr2[100], n, i;
   int *ptr1, *ptr2;

   printf("Enter the size of the array: ");
   scanf("%d", &n);

   for (i = 0; i < n; i++) {
      printf("Enter value : ");
      scanf("%d", &arr1[i]);
   }

   ptr1 = arr1;
   ptr2 = arr2;

   for (i = 0; i < n; i++) {
      *(ptr2 + i) = *(ptr1 + i);
   }

   printf("\nElements of the first array are: ");
   for (i = 0; i < n; i++) {
      printf("%d ", *(ptr1 + i));
   }

   printf("\nElements of the second array are: ");
   for (i = 0; i < n; i++) {
      printf("%d ", *(ptr2 + i));
   }

   return 0;
}