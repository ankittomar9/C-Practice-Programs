#include<iostream>
using namespace std;
int main(){
     float d=34.4f;      //type casting by default decimal is double
    long double e= 34.4l;

    cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl; // 12 aa rahi thi harry ki
    cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl; // 12 aa rahi thi harry ki
    cout<<"The value d is : "<<d<<endl<<"The value of e is  : "<<e<<endl;
    //***************Reference variable************************//
    float a=455;
    float &b = a; //store and print in reference variable

    cout<<" Reference variable without : "<<a<<endl;
    cout<<"Refeence variable with : "<<b<<endl;

    //***************Reference variable************************//
    int x=45;
    float y=45.5;

    cout<<"The value is typecasted in float : "<<(float)x<<endl;
    cout<<"The value is typecasted in float : "<<float(x)<<endl;

    cout<<"The value is typecasted in integer : "<<(int)y<<endl;;
    cout<<"The value is typecasted in integer : "<<int(y)<<endl;;

    cout<<"The expression is : "<<x+y<<endl;
    cout<<"The expression is : "<<x+int(y)<<endl;
    cout<<"The expression is : "<<x+(int)y<<endl;
    return 0;

}