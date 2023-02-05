#include<iostream>
using namespace std;
int f(int n)
{     
int a=1,b=0,c;
cout<<"0"<<" ";
 for(int i=2;i<=n;i++)
   {
   c=a+b;
   cout<<c<<" ";
   a=b;
   b=c;
   }
 
}
int main(){
    
 int n=10;
 f(n);
  
}