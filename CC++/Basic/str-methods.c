#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){

    char str[]= "Kailash";
    // Finding Length
    printf("%lu\n",strlen(str));
    // count exact string length without counting null character using loop - \0
    int length=0;
    while (str[length]!='\0'){
        length++;
    }
    printf("Length of string : %d",length);


    // Copying A string ==========================================================
    // char str1[]="Hello";
    // char str2[20];
    // strcpy(str2,str1);
    // printf("New String is %s",str2);

    // Copying string using loop:============================================================
    // int i=0;
    // while(str1[i]!='\0'){
    //     str2[i]=str1[i];
    //     i++;
    // }
    // str2[i]='\0';
    // printf("New String is %s",str2);


    // Modifying String ==========================================================
    // char str1[]="Hello";
    // printf("Old String : %s\n",str1);
    // str1[0]='Y';
    // printf("New String : %s\n",str1);

    
    // Joining (concatination) two strings
    // char str1[]="Hello ";
    // char str2[]="Kailash";
    // printf("Before Joining : %s\n",str1);
    // strcat(str1,str2);
    // printf("Joined String : %s\n",str1);

    // Comparing Strings:
    // char str1[]="Hello ";
    // char str2[]="Kailash";
    // char str3[]="Hello ";

    // if(strcmp(str1,str3)==0){
    //     printf("Same");
    // }
    // else{
    //     printf("Not Same");
    // }

    // Changing case of string:
    char str1[]="Hello";

    printf("Old String : %s\n",str1);
    for(int i=0; str1[i]!='\0'; i++){
        str1[i]=toupper(str1[i]);
    }

    printf("New String : %s",str1);
    return 0;
}