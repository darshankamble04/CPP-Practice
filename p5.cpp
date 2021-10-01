#include<iostream>
#include<cmath>
using namespace std;

int main(){

    // int num ;
    // int flag =0;
    // cout<<"Enter a number :";
    // cin>>num;

    // for(int i = 2; i< sqrt(num); i++){
    //     if(num%i == 0){
    //         flag = 1;
    //     }
    // }
    // if(flag == 1){
    //     cout<<"Number is not Prime .";
    // }else{
    //     cout<<"Number is Prime .";
    // }

    // FACTORIAL
    int n;
    cout<<"\nEnter a number to find factorial : ";
    cin>>n;
    int factorial = 1;
    for(int i =1; i<=n; i++){
        factorial *= i; 
    }
    cout<<factorial;
    
    
    return 0;
}