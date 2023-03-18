#include <stdio.h>

int main()
{

    char choice;
    printf("M for Monday\nT for Tuesday\nW for Wednesday\nt for Thursday\nF For Friday\nS for Saturday\n\nEnter your choice : ");

    scanf("%s", &choice);
    switch (choice)
    {
    case 'M':
        {
            printf("\nC class (3:30-5:30) for evaluation.\n");break;
        }
    case 'T':
        {
            printf("\nNo C Class.\n");break;
        }
    case 'W':
        {
            printf("\nC class (3:30-5:30) LAB.\n");break;
        }
    case 't':
        {
            printf("\nNo C Class.\n");break;
        }
    case 'F':
        {
            printf("\nC class (9:30-11:30) LAB + Theory.\n");break;
        }
    case 'S':
        {
            printf("\nC class (9:30-11:30) LAB + Theory.\n");break;
        }
    }
    return 0;
}