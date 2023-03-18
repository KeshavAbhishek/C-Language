#include <stdio.h>

int main(){
    int arrays[10]={10,20,30,40,50,60,70,80,90,100};
    for (int i = 1; i <= 10; i++)
    {
        if(i%2==0){
            arrays[i]=10;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arrays[i]);
    }

    return 0;
}