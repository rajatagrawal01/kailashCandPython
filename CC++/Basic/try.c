#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number\n");
    scanf("%d", &num); // user input

    if (num % 3 == 0 && num % 5 != 0){
        printf("The number %d is divisible by 3 only\n", num);
    }
    else if (num % 3 == 0 && num % 5 == 0){
        printf("The number %d is divisible by both 3 and 5\n", num);
    }

    else if (num % 3 != 0 && num % 5 == 0){
        printf("The number %d is divisible by 5 only\n", num);
    }
    else{
        printf("The number %d is not divisible by 3 and 5\n", num);
    }
    return 0;
}