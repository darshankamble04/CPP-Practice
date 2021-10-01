#include<iostream>
using namespace std;

int main (){

    // LINEAR SEARCH :

    int n ;
    cout<<"Enter a size of array : "; 
    cin>>n;
    int array[n];

    for(int i = 0; i<n; i++){
        cout<<"Enter each element one by one : ";
        cin>>array[i];
    }

    for(int i = 0; i<n; i++){
        cout<<array[i]<<" ";
    }

    

    int find;
    cout<<"Element to be find :";
    cin>>find;
    int flag =0;

    for(int i = 0; i<n; i++){
        if(find == array[i]){
        cout<<"Element is present on the index : "<<i;
        flag = 1;
        }
    }
    if(!flag == 1){
        cout<<"Element is not find";
    }

    // cout<<array[];

    return 0;
}