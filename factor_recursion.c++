#include<iostream>
using namespace std;

int factr(int n)
{
    //if(n==1) return 1;
    while(n>1){
    int answ= n*factr(n-1);
    return answ;}
}
int main()
{
    int result=factr(5);
    cout<<result;
    return 0;
}