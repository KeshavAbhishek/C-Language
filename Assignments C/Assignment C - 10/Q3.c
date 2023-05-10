// 3. WAP to Display alternate characters from file.

#include <stdio.h>

int main() {
    FILE *file;
    char filename[100], c;
    int count = 0;

    file = fopen("text.txt", "r");

    while ((c = fgetc(file)) != EOF) {
        if (count % 2 == 0) {
            printf("%c", c);
        }
        count++;
    }

    fclose(file);

    return 0;
}