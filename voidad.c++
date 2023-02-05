#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int  f=4.5;
    void * s=&f;
    float *ptr= (float* )s;
    cout<<*ptr;
}