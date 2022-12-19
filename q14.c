#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0,j=1,k,n;
    scanf("%d",&n);
    printf(" 0 1 ");
    for(int o=2;o<=n;o++)
    {

        k=i+j;
        printf("%d ",k);
        i=j;
        j=k;
        

    }
    return 0;
}