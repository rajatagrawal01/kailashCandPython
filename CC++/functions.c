#include <stdio.h>

// Void functions=================================
                // With taking parameters:
void eligibility(int age){
    if (age > 18){
        printf("Eligible for Driving\n");
    }
    else if (age == 18){
        printf("Eligible for learning license.\n");
    }
    else{
        printf("Not eligible for driving\n");
    }
};

                // Without taking parameters:
void hello(){
    printf("Hello Kailash");
}

// Int functions===================================
                // With taking parameters:

int add(int a,int b){
    return a+b;
}

int mul(int a,int b){
    return a*b;
}

int main(){
    // Non-returning functions:

    // int person1 = 34;
    // int person2 = 45;
    // int person3 = 23;
    // int person4 = 12;
    // int person5 = 78;

    // eligibility(person1);
    // eligibility(person2);
    // eligibility(person3);
    // eligibility(person4);
    // eligibility(person5);

    // hello();
    // ==========================returning functions:


    //variable storing a value after performing a function

    printf("Sum is : %d\n",add(2,3));

    int product=mul(2,3);
    printf("Product is : %d\n",product);

    

    return 0;
}