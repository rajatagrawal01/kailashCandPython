#include<stdio.h>

int main(){
    int a=50;
    int b=3;
    int sum=a+b;
    int sub=a-b;
    int mul=a*b;
    int div=a/b;
    int mod=a%b;

    printf("The sum of %d and %d is %d \n",a,b,sum);
    printf("The sub of %d and %d is %d\n",a,b,sub);
    printf("The mul of %d and %d is %d\n",a,b,mul);
    printf("The div of %d and %d is %d\n",a,b,div);
    printf("The mod of %d and %d is %d\n",a,b,mod);

    return 0;
}