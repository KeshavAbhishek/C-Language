// Write a c program to reverse the array elements.

# include<stdio.h>
int main (){
    int array1[5] ={1,2,3,4,5};
    int array2[5];
    for (int i = 0; i < 5; i++)
    {
        array2[4-i]=array1[i];
    }
    for (int i = 0; i < 5; i++)
    {
       printf("%d ",array2[i]);
    }
    
    return 0;
}

/*
5 4 3 2 1
*/