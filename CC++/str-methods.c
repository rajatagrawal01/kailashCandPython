#include<stdio.h>
#include<string.h>

int main(){
    // char str[]= "Kailash";


    // // Finding Length
    // printf("%lu\n",strlen(str));
    // // count exact string length without counting null character using loop - \0
    // int length=0;
    // while (str[length]!='\0'){
    //     length++;
    // }
    // printf("Length of string : %d",length);


    // Copying A string

    char str1[]="Hello";
    char str2[20];
    // strcpy(str2,str1);
    // printf("New String is %s",str2);

    // Copying string using loop:

    int i=0;

    while(str1[i]!='\0'){
        str2[i]=str1[i];
        i++;
    }
    str2[i]='\0';
    printf("New String is %s",str2);



    return 0;
}