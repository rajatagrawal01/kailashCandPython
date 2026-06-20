#include <stdio.h>

int main()
{
    // for (int i = 1;i<=10; i++){
    //     printf("%d\n", i);
    // }
    // for (int i = 10;i>=1; i--){
    //     printf("%d\n", i);
    // }

    // for(int i=1;i<=100;i++){
    //      if (i % 3 == 0 && i % 5 == 0){
    //         printf("%d\n", i);
    //     }
    // }
    int row =5;
    for(int i=1;i<=5;i++){
        for(int col=1;col<=i;col++){
            printf("*");
        }
        printf("\n");
    }


    return 0;
}