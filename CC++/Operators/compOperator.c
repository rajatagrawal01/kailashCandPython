#include<stdio.h>

int main(){
    int a=50;
    int b=40;

    printf("%d is greater than %d : %d\n",a,b,a>b);       // 1
    printf("%d is greater than %d : %d\n",a,b,a<b);       // 0
    printf("%d is greater than %d : %d\n",a,b,a>=b);      // 1
    printf("%d is greater than %d : %d\n",a,b,a<=b);      // 0
    printf("%d is greater than %d : %d\n",a,b,a==b);      // 0
    printf("%d is greater than %d : %d\n",a,b,a!=b);      // 1

    printf("\n",50!=40); 

    return 0;
}