#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        if (a % 5 == 0)
        {
            printf("The number is even and divisibe by 5");
        }
        else
        {
            printf("Number is even ,but not divisible by 5");
        }
    }
    else
    {
        printf("The number is odd");
    }

    return 0;
}
