#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int fact=1,i,j,sum=0;
    cin>>i;
    while(i>0)
    {
         fact*=i;
         i--;
    }
    printf("Factorial no. is %d",fact);
    return 0;
}