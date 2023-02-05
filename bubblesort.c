#include<stdio.h>

int bubble(int arr[],int n)
{
    int temp;
    for(int i=0;i<n;i++)
    {for(int j=0;j<n;j++)
    {
        if(arr[j]>arr[i])
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }

    }
}

int print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}

int main()
{
    int array[]={34,53,543,4,34,3,43,43,4,334,3,4},l;
    l=sizeof(array)/sizeof(array[0]);
    bubble(array,l);
    print(array,l);
    return 0;

}