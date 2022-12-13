#include<iostream>
using namespace std;

int main()
{
  int i,j,a,b,s,row=15;
  for(i=1;i<=row;i++)
  {
    for(s=1;s<=row-i;s++) cout<<" ";
    for(j=1;j<=i;j++) cout<<"* ";
  
    cout<<endl;
  }
   for(a=1;a<=row;a++) 
   {
     for(s=1;s<=a;s++) cout<<" ";
     for(b=row-1;b>=a;b--) cout<<"* ";
     cout<<endl;
   }
}