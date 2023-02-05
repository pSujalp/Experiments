#include<iostream>
using namespace std;

int main()
{
    int * ptr=NULL;
    {
        int x=6;
        ptr=&x;
        cout<<ptr<<endl<<*ptr<<"\n";
    }
    cout<<ptr;
}