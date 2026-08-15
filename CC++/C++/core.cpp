#include<iostream>

using namespace std;

int main(){
    int age=19;
    if(age>18){
        cout<<"Eligible for Driving";
    }
    else if(age==18){
        cout<<"Eligible for learning license.";
    }
    else{
        cout<<"Not eligible for driving";
    }

    return 0;
}