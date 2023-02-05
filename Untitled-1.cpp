#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=7;i++)
    {
       // for(int s=1;s<=7-i;s++) cout<<" ";
        for(int j=1;j<=i;j++) cout<<"# "; 
        cout<<endl;
    }
   return 0;
}