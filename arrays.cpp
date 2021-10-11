#include<iostream>
using namespace std;

int main(){
    
    int array []={23,45,84,66,65};

    
    cout<<array[0]<<endl;
    cout<<array[1]<<endl;
    cout<<array[2]<<endl;
    cout<<array[3]<<endl;

    cout<<endl;
    int count = 0;
    for (int i = 0; i < sizeof(array); i++)
    {
         cout<<"The value of marks  using for loop : "<<array[i]<<endl;
         count++;
    }

    cout<<" count  "<<count<<endl;

    cout<<endl;
    int j=0;
    while(array[j]){
        cout<<"The value of marks using while loop : "<<array[j]<<endl;
        j++;
    }



    return 0;
}