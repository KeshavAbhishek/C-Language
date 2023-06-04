// Print A to Z

#include <stdio.h>

int main(){
    char str = 'A';

    for (int i = 0; i < 26; i++)
    {
        printf("%c ", str++);
    }

    return 0;
}

/*
A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
*/