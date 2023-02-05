#include<iostream>
using namespace std;

int main()
{
    for(int i=1;i<=8;i++)
    {
        for(int s=1;s<=8-i;s++) printf(" ");
         for(int j=1;j<=i;j++) printf("* ");
         printf("\n");
    }
     for(int i=2;i<=8;i++)
    {
        for(int s=3;s<=i;s++) printf(" ");
         for(int j=8;j>=i;j--) printf(" *");
         printf("\n");
    }
}