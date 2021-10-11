#include<iostream>

using namespace std;

int global =36;

void sum(){

    int e=10;
    cout<<"\nThe value of global variable called in function in sum :"<<global<<endl;
}
int main(){

    int a,b,c;
    cout<<"Enter number 1 :"; // Insertion Operator
    cin>>a; //extraction operator
   cout<<"Enter number 2 :";
   cin>>b;
  //  c=a+b;
    cout<<"\nThe sum of two number is :"<<a+b;
    int s=14;
    sum();

    float d=34.4f;      //type casting by default decimal is double
    long double e= 34.4l;

    cout<<"The value d is : "<<d<<endl<<"The value of e is  : "<<e<<endl;


    return 0;
}