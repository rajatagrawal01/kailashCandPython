#include<stdio.h>

int main(){
    FILE *fp;

    // fp = fopen("data.txt","w");
    // fp = fopen("data.txt","a");
    // fprintf(fp,", Hi Kailash");
    // fclose(fp);

    char ch;
    fp=fopen("data.txt","r");
    while((ch=fgetc(fp))!=EOF){
        printf("%c",ch);
    }
    fclose(fp);

    return 0;
}