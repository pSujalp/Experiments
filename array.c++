#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,array[10],n;
    printf("Enter the no of amount of elements needed in a array\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
     for(i=0;i<n;i++)
    {
        printf("%d \t",array[i]);
    }


}