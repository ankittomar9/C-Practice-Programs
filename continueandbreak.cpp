#include<iostream>
using namespace std;

int main(){
    for (int i = 0; i < 10; i++)
    {
        /* code */
        //cout<<i<<endl;
        if(i==2){
            //break;
            continue; 
        }
        cout<<i<<endl;
    }
    
    return 0;
}