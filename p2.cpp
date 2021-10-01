#include<iostream>
using namespace std;

int main(){

/*
    // IF...ELSE STATEMENT
    cout<<"enter value of a b c"<<endl;
    int a;
    int b;
    int c;
    cin>>a,b,c;

    if(a>b){
        if(a>c){
            cout<<"a is bigger"<<endl;
        }else{
            cout<<"c is bigger"<<endl;
        }
    }else{
        if(b>c){
            cout<<"b is bigger"<<endl;
        }else{
            cout<<"c is bigger"<<endl;
        }
    }*/

    // FOR LOOP 
    // for (int i = 0; i < 6; i++)
    // {
    //     cout<<"Hello World!"<<endl;
    // }

    int i;
    int a = 2;
    int b = 1000;
    int x = 0;
    for(a; a<b; a++ ){    
        for (i= 2; i<a; i++){
            if(a%i == 0){
                // cout<<"\t"<<a;
                break;
            }
        }
        if(i==a){
            cout<<"\t"<<a;
            x++;

        }}
        cout<<"\nTotal number of prime numbers :"<<x;

    return 0;
}