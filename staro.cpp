#include<iostream>
using namespace std;

int main()
{
    for(int i=1;i<=10;i++)
    {
        
        for(int j=1;j<=i;j++) printf("%d",j);
        for(int s=1;s<=10-i;s++) printf(" ");
         for(int s=1;s<=10-i;s++) printf(" ");
        for(int k=i;k>=1;k--) printf("%d",k);
        printf("\n");      
    }
}