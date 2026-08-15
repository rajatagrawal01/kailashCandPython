#include<iostream>

using namespace std;

int main(){
    // int a=1;
    // while(a<=10){
	// 	cout<<a<<endl;
    //     a++; 
	// };

    // for(int i=1;i<=10;i++){
    //     cout<<i<<endl;
    // }

    int arr[]={45,37,55,67,78};
    
    // cout<<"Old way"<<endl;
    // for(int i=0;i<5;i++){
    //     cout<<arr[i]<<endl;
    // }

    cout<<"Old Array"<<endl;
    for(int x:arr){
        cout<<x<<endl;
    }

    cout<<"New array"<<endl;
    for(int &x:arr){
        x=x/10;
        cout<<x<<endl;
    }

    cout<<"Old Array"<<endl;
    for(int x:arr){
        cout<<x<<endl;
    }


    return 0;
}