#include<stdio.h>
#define n 100
int main()
{
    int array[n],k;
    printf("Enter the number of elemets to be entered in an array");
    scanf("%d",&k);
    array[k];
    int array1[k];
    printf("Enter the values of elements in 1 st array\n");
    for(int i=0;i<k;i++)
    {
        scanf("%d",&array[i]);
    }
    int l=0;
    for(int i=k;i>=0;i--)
    {
        
        array1[l]=array[i];
        l++;
    }
    printf("The reverse order of 1st array is:");
    for(int i=0;i<l;i++)
    {
        printf("%d \t",array1[i]);
    }


}