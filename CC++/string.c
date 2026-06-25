#include<stdio.h>

int main(){
    // char c[6]={'H','E','L','L','O','\0'};

    // for(int i=0;i<5;i++){
    //     printf("%c",c[i]);
    // }

    // char name[]="Kailash";
    // printf("%s\n",name);
    // int length = sizeof(name)/sizeof(name[0]);
    // printf("Length of array is : %d\n",length);

    // 

    char stuName[20];
    printf("Enter Your name: ");
    scanf("%s",stuName);

    printf("Your entered name is : %s",stuName);

    return 0;
}