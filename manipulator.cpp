#include<iostream>
#include<iomanip>
using namespace std;

int main(){
 //  int a=45;
 //  cout<<"The value without const"<<a<<endl;
//   const int a=10;
//   cout<<"The value with const : "<<a<<endl;
//*************************Manipulators*********************///

    int a=3; int b=45; int c=1233;
    cout << "The value of a with setw is : "<<setw(4)<<a<<endl; // align number that you need to do 
    cout << "The value of b with setw is : "<<setw(4)<<b<<endl; // center left right justify by adjusting space
    cout << "The value of c with setw is : "<<setw(4)<<c<<endl;

    cout << "The value of a without setw is : "<<a<<endl;
    cout << "The value of b without setw is : "<<b<<endl;
    cout << "The value of c without setw is : "<<c<<endl;
    
    
    return 0;
}