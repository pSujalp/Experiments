#include<stdio.h>

int main()
{
    int array[100],array1[100],n,array3[100];
    printf("Enter the size of an array");
    scanf("%d",&n);
    int k=(n*2);
    array1[n],array[n],array3[k];
    printf("Enter the elements of 1st array:\n");
    for(int i=0;i<n;i++) scanf("%d",&array[i]);
     printf("Enter the elements of 2nd array:\n");
    for(int i=0;i<n;i++) scanf("%d",&array1[i]);

    printf("After merging the array looks like:");
    
    for(int i=0;i<n;i++)
    {
        array3[i]=array[i];
    }
    int p=n;
    for(int j=0;j<k;j++)
    {
        array3[p]=array1[j];
        p++;
    }
    for(int i=0;i<k;i++) printf("%d ",array3[i]);

    printf("\n");

    for(int i=0;i<k;i++)
    {
        for(int j=i+1;j<k;j++)
        {
            if(array3[j]>array3[i])
            {
                int temp;
                temp=array3[j];
                array3[j]=array3[i];
                array3[i]=temp;
            }
        }
    }
    printf("Sorted array is : \n");
    for(int i=0;i<k;i++) printf("%d \t",array3[i]);

}