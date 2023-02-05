#include<stdio.h>
int main()
{
for(int i=1;i<=3;i++)
    {
         for(int s=1;s<=3-i;s++) printf(" ");
        for(int j=1;j<=i;j++) printf("%d",j);
       
        printf("\n");

    }
}