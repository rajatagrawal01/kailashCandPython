#include<stdio.h>

int main(){
    FILE *old, *new;
    char ch;


    // Copying data from one file to another:
    // old=fopen("old.txt","r");
    // new = fopen("new.txt","w");
    // while ((ch=fgetc(old))!=EOF)
    // {
    //     fputc(ch,new);
    // }
    // // fprintf(new,"\nThis is new file Data");
    // fclose(old);
    // fclose(new);

    // Counting Characters from a file

    int count=0;
    old=fopen("old.txt","r");

    while((ch=fgetc(old))!=EOF){
        count++;
    }

    printf("Number of characters in old file are: %d",count);
    fclose(old);

    return 0;
}