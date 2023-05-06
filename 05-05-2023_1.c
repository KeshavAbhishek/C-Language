#include <stdio.h>

int main(){
    struct book
    {
        char Name[100];
        float price;
        int pageNo;
    }Book;
    
    printf("\nEnter Name : ");
    scanf("%s", &Book.Name);
    printf("Enter Price : ");
    scanf("%f", &Book.price);
    printf("Enter number of pages : ");
    scanf("%d", &Book.pageNo);

    printf("\n%s\n%f\n%d", Book.Name, Book.price, Book.pageNo);
    return 0;
}