// 3. WAP in C to print the fibonacci series using recursion.

#include <stdio.h>
int new = 0;

int printTerm(int a, int b, int index){
    new = a+b;
    printf(" %d", new);
    a=b;
    b=new;
    if(index>1){
        index -= 1;
        printTerm(a, b, index);
    }
    else{
        return 0;
    }

}

int main(){
    int terms;
    
    printf("No. of terms : ");
    scanf("%d", &terms);
    
    if(terms>=3){
        printf("0 1");
        printTerm(0, 1, terms-2);
    }
    
    return 0;
}