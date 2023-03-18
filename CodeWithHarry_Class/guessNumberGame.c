#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
   for (int i = 0; i <= 20; i++)
   {
      srand(time(0));
      printf("%d\n", rand());
      return 0;
   }

}