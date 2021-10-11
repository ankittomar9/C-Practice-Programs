#include<iostream>

using namespace std;

int main(){

    int age;
    cout<<"Enter age to check that you are eligible for voting : "<<endl; 
    cin>>age;

    if(age<18){
        cout<<"You are not eligible for voting :"<<endl;
    }
    else if(age>=18){
        cout<<"You are eligible for voting : "<<endl;
    }
   // else(){
  //      cout<<"You are eligible for voting : "<<endl;
  //  }

    return 0;
}
