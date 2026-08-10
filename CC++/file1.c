#include<stdio.h>

int main(){
    FILE *fp;

    // Writing Data in file using write or append mode
    // fp = fopen("data.txt","w");
    // fp = fopen("data.txt","a");
    // fprintf(fp,", Hi Rajat");
    // fclose(fp);


    // Reading data from file one character at a time
    // char ch;
    // fp=fopen("data.txt","r");
    // while((ch=fgetc(fp))!=EOF){
    //     printf("%c",ch);
    // }
    // fclose(fp);

    // Reading data from file using Strin
    // char str[100];
    // fp=fopen("data.txt","r");
    // while (fgets(str,sizeof(str),fp)!=NULL){
    //     printf("%s",str);
    // }
    // fclose(fp);

    // Storing a value from variable in file:
    // char stuName[]="Hello Kailash"; //Kailash or anything typed by user
    // fp=fopen("data.txt","w");
    // fprintf(fp,"%s\n",stuName);
    // fclose(fp);
    
    
    //Taking user input and storing it in file

    // char empName[100];
    // fp=fopen("data.txt","w");
    // printf("Enter Employee name :");
    // scanf("%s",empName);
    // fprintf(fp,"%s\n",empName);
    // fclose(fp);

    // remove("data.txt");
    rename("data.txt","stu.txt");

    return 0;
}
