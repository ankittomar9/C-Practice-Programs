#include<iostream>
using namespace std;

int main(){
    //Learning pointers

    int a=3;
    int* b=&a;

        // & ----> (Address of) the operator 
        cout<<"The address of  is :"<<&a<<endl;
        cout<<"The address of  is :"<<b<<endl;

        // * ----> Deferencing  operator 
        cout<<"The value of  b is :"<<*b<<endl; //value ke liye pointer variable ko print karo with *
        cout<<"The value is a : "<<a<<endl;

        // ptr to ptr

    int** c= &b;
    cout<<"The address of b : "<<&b<<endl;
    cout<<"The address of b : "<<c<<endl;
    cout<<"The value at address c is   : "<<*c<<endl;
    cout<<"The value at address value_ at(value_at address (c)) is   : "<<**c<<endl;
   

    return 0;
}