#include<iostream>

using namespace std;

int main(){

    int n,r,b,sum=0;
    
cout<<"enter the number to check armstrong"<<endl;
cin>>n;
int temp=n;
while(n>0){   //using while loop

        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }

 if(temp==sum)  {
     cout<<"The number is armstrong";
 } 
  else
     {
         cout<<"The number is not armstrong";
     }

return 0;
}