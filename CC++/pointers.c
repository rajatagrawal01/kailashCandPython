#include<stdio.h>

int main(){
    int flat=23;
    char a='F';
    char b[]='Kailash';
    float y=34.2
    int *building=&flat;
    int arr[]={23,464,352,14,53,2234,2342,234,7686,857};


    // printf("The value of flat is %d\n",flat);
    // printf("The address of flat using & sign is %d\n",&flat);
    // printf("The address of flat using building variable is %d\n",building);
    // printf("The address of building building is %d\n",&building);

    printf("The address of array is %d\n",&arr);
    printf("The address of 0th value in array is %d",&arr[1]);
}