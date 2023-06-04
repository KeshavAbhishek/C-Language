// #include <stdio.h>

// int main(){
//     int n1 = 10;
//     int n2 = 15;

//     int *ptr;

//     ptr = &n1;
//     printf("%d ", *ptr);

//     ptr = &n2;
//     printf("%d", *ptr);

//     return 0;
// }

// #include <stdio.h>

// int main(){
//     // int ctr = 1;
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d ", j);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int number, reversedNumber = 0;

//     printf("Enter a number: ");
//     scanf("%d", &number);

//     while (number > 0)
//     {
//         reversedNumber = reversedNumber * 10 + number % 10;
//         number /= 10;
//     }

//     printf("The reversed number is: %d\n", reversedNumber);

//     return 0;
// }


// #include <stdio.h>

// int main(){
//     char stringNum[] = "123";

//     int digit = 0;

//     int num = 0;

//     for (int i = 0; i < 3; i++)
//     {
//         digit = stringNum[i] - '0';
//         num = num*10+digit;
//     }

//     printf("%d", num);
    
//     return 0;
// }


// #include <stdio.h>

// void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod)
// {
// 	if (n == 0) {
// 		return;
// 	}
// 	towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
// 	printf("\nMove disk %d from rod %c to rod %c", n, from_rod, to_rod);
// 	towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
// }


// int main()
// {
// 	int N = 1;

// 	// A, B and C are names of rods
// 	towerOfHanoi(N, 'A', 'C', 'B');
// 	return 0;
// }



// #include <stdio.h>

// int main(){
// 	float kmt;
// 	float price=0;

// 	printf("Enter km travelled : ");
// 	scanf("%f", &kmt);

// 	if(kmt>=12){
// 		price += 100;
// 		kmt = kmt-12;
// 	}
// 	if(kmt>0){
// 		price += 4*8;
// 		kmt = kmt-4;
// 	}
// 	if(kmt>0){
// 		price += 4*6;
// 		kmt = kmt-4;
// 	}
// 	price += (kmt)*5;
	
// 	printf("\nMoney spent : %.2f", price);
// 	return 0;
// }

// #include <stdio.h>

// int main(){
	
// 	int mark;
	
// 	printf("Enter mark out of 100 : ");
// 	scanf("%d", &mark);

// 	int choice = mark/10;

// 	switch (choice)
// 	{
// 	case 9:
// 		printf("Grade = X");
// 		break;
// 	case 8:
// 		printf("Grade = A");
// 		break;
// 	case 7:
// 		printf("Grade = B");
// 		break;
// 	case 6:
// 		printf("Grade = C");
// 		break;
// 	case 5:
// 		printf("Grade = D");
// 		break;
// 	case 4:
// 		printf("Grade = P");
// 		break;
// 	case 3:
// 		if(mark>35){
// 			printf("Grade = P");
// 		}
// 		else{
// 			printf("Grade = F");
// 		}
// 		break;
// 	}
// 	return 0;
// }


// #include <stdio.h>

// int fibo(int n, int a, int b){
//     if(n>0){
//         printf("%d ", a);
//         fibo(n-1, b, a+b);
//     }
// }


// int main(){
//     fibo(20,0,1);
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main(){
//     int *array = (int*)malloc(3 * sizeof(int));

//     array[0]=50;
//     array[1]=0;
//     array[2]=-50;


//     for (int i = 0; i < 3; i++)
//     {
//         printf("%d ", array[i]);
//     }
    
// }


// #include <stdio.h>
// #include <stdlib.h>

// int main(){
//     int *array = (int*)calloc(3, sizeof(int));

//     array[0]=50;
//     array[1]=0;
//     array[2]=-50;


//     for (int i = 0; i < 3; i++)
//     {
//         printf("%d ", array[i]);
//     }
    
// }

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char ostring[] = "radar";
//     char tstring[strlen(ostring)];
    
//     for (int i = 0; i < strlen(ostring); i++) {
//         tstring[i] = ostring[strlen(ostring) - 1 - i];
//     }
//     tstring[strlen(ostring)] = '\0';
    
//     printf("Original string: %s\n", ostring);
//     printf("Reversed string: %s\n", tstring);
    
//     if (strcmp(ostring, tstring) == 0) {
//         printf("The string is a palindrome.\n");
//     } else {
//         printf("The string is not a palindrome.\n");
//     }
    
//     return 0;
// }


// #include <stdio.h>
// #include <string.h>

// int main(){
//     char A[] = {'V','A','C','\0'};

//     printf("%d", strlen(A));
//     return 0;
// }


// #include <stdio.h>

// int main(){
//     for(;;){
//         printf("Hello\n");
//     }
//     return 0;
// }


// #include <stdio.h>

// int main(){
//     int c;

//     c = (1+2,2+3,5+5);

//     printf("%d", c);
//     return 0;
// }

#include <stdio.h>

int main(){
    int a = 20;
    int *ptr;

    ptr = &a;

    *ptr = 12;

    printf("%d", a);
    return 0;
}