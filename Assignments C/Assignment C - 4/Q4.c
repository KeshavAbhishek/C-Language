#include <stdio.h>
#include <stdlib.h>

int main()
{

	int top = -1;
	int size = 5;
	int i;

	int arr[size], choice, data;
	while (top+1 <= size)
	{

		printf("\n------\n1. Push\n2. Pop\n3. Traverse\n\nEnter choice : ");
		scanf("%d", &choice);

		switch (choice)
		{
			case 1:
				if(size - 1 == top){
					printf("Can't push value. Stack is full.");
					exit(0);
				}
				else{
					printf("Enter value : ");
					scanf("%d", &data);
					arr[top+1]=data;
					top++;
				}
				break;

			case 2:
				if(top == -1){
					printf("Stack is empty. Value can't be popped.");
					exit(0);
				}
				else{
					printf("\nElement removed : %d\n", arr[top]);
					top--;
				}
				break;

			case 3:
				if(top>=0){
					i=0;
					do
					{
						printf("%d ", arr[i]);
						i++;
					} while (i<=top);
				}
				else{
					printf("No value to traverse.");
					exit(0);
				}
				break;
		};
	}

	return 0;
}

/*
------
1. Push
2. Pop
3. Traverse

Enter choice : 1
Enter value : 25

------
1. Push
2. Pop
3. Traverse

Enter choice : 1
Enter value : 30

------
1. Push
2. Pop
3. Traverse

Enter choice : 1
Enter value : 35

------
1. Push
2. Pop
3. Traverse

Enter choice : 2

Element removed : 35

------
1. Push
2. Pop
3. Traverse

Enter choice : 3
25 30
*/