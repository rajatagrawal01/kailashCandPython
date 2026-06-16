// #include<stdio.h>

// int main(){
//     int day;
//     printf("Enter day number:");
//     scanf("%d",&day);

//     if(day==1){
//         printf("Day is Monday");
//     }
//     else if(day==2){
//         printf("Day is Tuesday");
//     }
//     else if(day==3){
//         printf("Day is Wednesday");
//     }
//     else if(day==4){
//         printf("Day is Thursday");
//     }
//     else if(day==5){
//         printf("Day is Friday");
//     }
//     else if(day==6){
//         printf("Day is Saturday");
//     }
//     else if(day==7){
//         printf("Day is Sunday");
//     }
//     else{
//         printf("Invalid day number.Please enter between 1-7");
//     }
//     return 0;
// }

//=================================================================================================
// 2.	Calculate income tax based on income slabs using if-else ladder.

#include <stdio.h>

int main()
{
    int income;

    printf("Enter Use Income: ");
    scanf("%d",&income);

    if (income >= 0 && income <= 400000){
        printf("Tax rate : %d ", 0);
    }
    else if (income >= 400001 && income <= 800000){
        printf("Tax rate : %d ", 5);
    }
    else if (income >= 800001 && income <= 1200000){
        printf("Tax rate : %d ", 10);
    }
    else if (income >= 1200001 && income <= 1600000){
        printf("Tax rate : %d ", 15);
    }
    else if (income >= 1600001 && income <= 2000000){
        printf("Tax rate : %d ", 20);
    }
    else if (income >= 2000001 && income <= 2400000){
        printf("Tax rate : %d ", 25);
    }
    else if (income >= 2400000){
        printf("Tax rate : %d ", 30);
    }
    else{
        printf("Invalid income");
    }
    return 0;
}