#include<iostream>
using namespace std;

int main(){
    
    int rows;
    int columns;
    cout<<"Enter rows :";
    cin>>rows;
    cout<<"Enter columns :";
    cin>>columns;

// REACTANGEL
    // * * * *
    // * * * *
    // * * * *
    // * * * *
    // * * * *
    // * * * *
    // * * * *

    for(int i=1; i<=rows; i++){
      for(int j=1; j<=columns; j++){
          cout<<" *";
      }
        cout<<endl;
    }

// ******************************************************************************

// HOLLOW REACTANGLE 
    // * * * *
    // *     *
    // *     *
    // *     *
    // *     *
    // *     *
    // *     *
    // * * * *

    for(int i=1; i<=rows; i++){
        for(int j=1; j<=columns; j++){
            if(i==1 || i == rows || j==1 || j==1 || j== columns){
                cout<<" *";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }


// ******************************************************************************


// INVERT PYRAMID
    //  * * * * * * * *
    //  * * * * * * *
    //  * * * * * *
    //  * * * * *
    //  * * * *
    //  * * *
    //  * *
    //  *

    int n ;
    cout<<"Enter number :";
    cin >> n;
    for(int i = n; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout<<" *";
        }
        cout<<endl;
    }

// ******************************************************************************

    //  *
    //  * *
    //  * * *
    //  * * * *
    //  * * * * *
    //  * * * * * *
    //  * * * * * * *
    //  * * * * * * * *

    for(int i = 1; i<=n; i++){
        for(int k=1; k<=i; k++){
            cout<<" *";
        }
        cout<<endl;
    }

// ******************************************************************************



    // HALF PYRAMID AFTER 180 DEG ROTATION ...
    //                *
    //              * *
    //            * * *
    //          * * * *
    //        * * * * *
    //      * * * * * *
    //    * * * * * * *
    //  * * * * * * * *

    for(int i = 1; i<=n; i++){
        for(int j = n-1; j>=i; j--){
            cout<<"  ";
        }
        for(int k=1; k<=i; k++){
            cout<<" *";
        }
        cout<<endl;
    }

// ******************************************************************************

    //                * *
    //              * * * *
    //            * * * * * *
    //          * * * * * * * *
    //        * * * * * * * * * *
    //      * * * * * * * * * * * *
    //    * * * * * * * * * * * * * *
    //  * * * * * * * * * * * * * * * *

     for(int i = 1; i<=n; i++){
        for(int j = n-1; j>=i; j--){
            cout<<"  ";
        }
        for(int k=1; k<=i; k++){
            cout<<" *";
        }
        for(int k=1; k<=i; k++){
            cout<<" *";
        }
        cout<<endl;
    }
    return 0 ;
}