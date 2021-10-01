#include<iostream>
using namespace std;
int main(){


    // 1 
    // 2 3
    // 4 5 6
    // 7 8 9 10
    // 11 12 13 14 15
    // 16 17 18 19 20 21
    // 22 23 24 25 26 27 28
    // 29 30 31 32 33 34 35 36
    int n;
    cin>>n;
    int count =1;
    for (int i =1; i<=n; i++){
        for(int j=1; j<=i; j++){
            // cout<<j;
            cout<<count<<" ";
            count ++;
        }
        cout<<endl;
    }

    // ******************************************************************************
    //  *                             *
    //  * *                         * *
    //  * * *                     * * *
    //  * * * *                 * * * *
    //  * * * * *             * * * * *
    //  * * * * * *         * * * * * *
    //  * * * * * * *     * * * * * * *
    //  * * * * * * * * * * * * * * * *
    //  * * * * * * * * * * * * * * * *
    //  * * * * * * *     * * * * * * *
    //  * * * * * *         * * * * * *
    //  * * * * *             * * * * *
    //  * * * *                 * * * *
    //  * * *                     * * *
    //  * *                         * *
    //  *                             *

    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout<<" *";
        }
        for(int k =n-1; k>=i; k--){
            cout<<"  ";
        }
        for(int k =n-1; k>=i; k--){
            cout<<"  ";
        }
        for(int j = 1; j<=i; j++){
            cout<<" *";
        }
        cout<<endl;
    }

    for(int i = 1; i<=n; i++){

        for(int j =n; j>=i; j--){
            cout<<" *";
        }
        for(int j = 1; j<i; j++){
            cout<<"  ";
        }
        for(int j = 1; j<i; j++){
            cout<<"  ";
        }
        for(int j =n; j>=i; j--){
            cout<<" *";
        }
        cout<<endl;

    }
    return 0;
}