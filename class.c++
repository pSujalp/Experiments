#include<stdio.h>

int main()
{
    int array[100];
    int n,i;
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&array[i]);
int max=array[0],min=array[0];

    for(int i=0;i<n;i++)
    {
        if(array[i]>max) max=array[i];
        if(array[i]<min) min=array[i];
    }
    printf("%d -is maximum \n %d-is minimum",max,min);


}