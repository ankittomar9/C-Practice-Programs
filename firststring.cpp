#include<iostream>
using namespace std;

int main(){

    string name;

    cout<<"May I know your name?"<<endl;
   // cin>>name;
    getline(cin,name);

    cout<<"welcome Mr/.Mrs  "<<name;
    return 0;
}