#include <stdio.h>

void print_star();
void print_dollar();
void (*func_ptr)() = print_star; // initialize function pointer to print_star

int main() {
    for (int i = 0; i < 2; i++) { // iterate for 2 rows
        for (int j = 0; j < 10; j++) { // iterate for 10 columns
            (*func_ptr)(); // call the function pointed by func_ptr
        }
        printf("\n");
        func_ptr = (func_ptr == print_star) ? print_dollar : print_star; // alternate between print_star and print_dollar
    }
    return 0;
}

void print_star() {
    printf("* ");
}

void print_dollar() {
    printf("$ ");
}
