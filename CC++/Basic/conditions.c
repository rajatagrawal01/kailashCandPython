#include<stdio.h>

int main(){
    // if (age>=18){
	//     printf("Eligible for vote");
    // }
    // else{
	//     printf("Not eligible for vote");
    // }

    int age=19;
    // Major Condition
    if(age>18){
        printf("Eligible for Driving");
    }
    // Secondary Condition
    else if(age==18){
        printf("Eligible for learning license.");
    }
    // All the remaining conditions
    else{
        printf("Not eligible for driving");
    }
    return 0;
}