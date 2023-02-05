#include<iostream>
#include<math.h>
//#include<math>
#include<cmath>

using namespace std;

int main()
{
    int a,b,result;
    cout<<"Enter any two number";
    cin>>a>>b;
    result=min(a,b);
    while(result>0)
    {
        
        if(a%result==0 && b%result==0) break;
        else result--;
        }
        cout<<"The gcd is "<<result;
}