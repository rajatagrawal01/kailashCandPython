#include<stdio.h>

int main(){

    int arr[3]={23,45,56};
    float arr2[3]={23.5,45.7,56.9};
    char arr3[6]={'H','E','L','L','O'};

    // Defining array without size

    int arr4[]={34,342,346,457,76,45};

    int size = sizeof(arr4)/sizeof(arr4[0]);

    printf("Length of array is : %d",size);
    // printf("%d",arr[2]);
    // printf("%f",arr2[0]);
    // printf("%c",arr3[0]);

    // int arr5[5];
    // for(int i=0;i<5;i++){
    //     printf("Enter %d value : ",i+1);
    //     scanf("%d",&arr5[i]);
    // }
    // for (int i = 0; i < 5; i++){
    //     printf("%d\n",arr5[i]);
    // }
    


    return 0;
}