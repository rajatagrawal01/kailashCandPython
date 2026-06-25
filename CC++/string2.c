#include<stdio.h>

int main(){
    char name[20],city[20];
    int age,mob;

    printf("Enter Your name :");
    scanf("%s",name);

    printf("Enter Your City :");
    scanf("%s",city);

    printf("Enter Your age :");
    scanf("%d",age);

    printf("Enter Your Mobile :");
    scanf("%d",mob);

    printf("Your Name is %s and you live in %s, Your age is %d and Mobile number is %d",name,city,age,mob);
    
    return 0;
}