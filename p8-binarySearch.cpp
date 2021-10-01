// BINARY SEARCH 

#include<iostream>
using namespace std ;

int binarySearch(int even[], int n , int key ){
    int s =0;
    int e =n;
    while (s<=e)
    {
        int mid = (s+e)/2;
        cout<<mid<<endl;
        if(even[mid] == key){
            return mid;
        }else if(even[mid]>key){
            e = mid - 1;
        }else {
            s = mid + 1;

        }
    }
    return -1;
    
}

int main(){

    int n;
    cout<<"size of array : ";
    cin>>n;
    int even[n];
    for(int i = 0; i<n; i++){
        cout<<"enter a value one by one : ";
        cin>>even[i];
    }
    int key;
    cout<<"Enter a value to be find :";
    cin>>key;

    cout<<binarySearch(even,n,key);
    return 0;
}