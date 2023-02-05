#include<iostream>
using namespace std;

int main()
{
    int i,j;
    for(i=1;i<=100;i++)
    {
        if( i%2==0 || i%3==0||i%5==0||i%7==0||i%11==0) continue;
        else cout<< i<<"\n";   }
}