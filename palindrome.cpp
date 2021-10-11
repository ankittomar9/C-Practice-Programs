#include<iostream>

using namespace std;

int main(){

    int n,r,b,sum=0;
    
cout<<"enter the number to check palindrome"<<endl;
cin>>n;
int temp=n;
while(n>0){

        r=n%10;
        sum=(sum*10)+r;
        n=n/10;
    }
//cout<<sum<<endl;
 if(temp==sum)  {
     cout<<"The number is palindrome";
 } 
  else
     {
         cout<<"The number is not palindrome";
     }

return 0;
}