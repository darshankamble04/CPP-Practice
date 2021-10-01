#include<iostream>
using namespace std;

int main(){
    int a;
    a = 24;
    cout<<"size of int is :"<<sizeof(a)<<endl;

    float b;
    b = 23.4;
    cout<<"size of float is :"<<sizeof(b)<<endl;

    double c;
    c = 23.4;
    cout<<"size of double is :"<<sizeof(c)<<endl;

    short int si;
    long int li;
    cout<<"size of short is :"<<sizeof(si)<<endl;
    cout<<"size of long is :"<<sizeof(li)<<endl;

    return 0;
}