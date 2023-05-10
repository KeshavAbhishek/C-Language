#include <stdio.h>

struct justThere
{
    int a;
    int b;
    struct justThereOnly
    {
        int c;
        float d;
    }n1;
    
}p1;


int main(){
    struct justThere p1 = {1,2,{3,7.9}};
    printf("%d\n%d\n%d\n%f", p1.a, p1.b, p1.n1.c, p1.n1.d);
    return 0;
}