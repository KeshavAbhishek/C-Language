#include <stdio.h>

int main(int argc, char *argv[]) {
    FILE *fp;
    char ch;

    // Check if a filename was provided on the command line
    if (argc < 2) {
        printf("Usage: %s filename\n", argv[0]);
        return 1;
    }

    fp = fopen(argv[1], "r");

    while ((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }
    fclose(fp);

    return 0;
}