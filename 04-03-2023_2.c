// #include <stdio.h>

// int main(){
//     int n = 25;
//     for (int i = 1; i <= 25; i++)
//     {
//         if (i==6){
//             printf("\n");
//             printf("%5d", i);
//         }
//         else if (i==11){
//             printf("\n");
//             printf("%5d", i);
//         }
//         else if (i==16){
//             printf("\n");
//             printf("%5d", i);
//         }
//         else if (i==21){
//             printf("\n");
//             printf("%5d", i);
//         }
//         else{
//             printf("%5d", i);
//         }
//     }

//     return 0;
// }

#include <stdio.h>
#include <time.h>

int main(){
    clock_t start, end;
    double cpu_time_used;
    start = clock();

    // Code Starts
    int n=1;
    while (n<=1000)
    {
        printf("%d\v", n);
        n++;
    }
    // Code Ends

    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Execution time: %f seconds\n", cpu_time_used);
    
    return 0;
}