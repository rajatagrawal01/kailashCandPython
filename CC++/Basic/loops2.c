#include <stdio.h>

int main()
{
    // int a=2;
    // if(a%2==0){
    //     int i=1;
    //     while (i<=5){
    //         printf("%d\n",i);
    //         i++;
    //     }
    // }

    int i = 1;
    while (i <= 100){
        if (i % 3 == 0 && i % 5 == 0){
            printf("%d\n", i);
        }
        i++;
    }

    return 0;
}