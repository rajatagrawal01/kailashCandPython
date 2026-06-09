#include<stdio.h>

int main(){
    int a;
    int b;

    printf("Enter First Value\n");
    scanf("%d",&a); //user input
    printf("Enter Second Value\n");

    scanf("%d",&b);

    printf("The value of a is : %d\n",a);
    printf("The value of b is : %d\n",b);
    printf("The sum of a and b is : %d\n",a+b);

    return 0;
}