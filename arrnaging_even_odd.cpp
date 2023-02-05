#include<stdio.h>
//#include<


int main()
{
   int array[100],even[100],odd[100],n,count1=0,count2=0;
   printf("Enter the size of an array");
   scanf("%d",&n);
   array[n];
   printf("enter the value of elements in an array:");

   for(int i=0;i<n;i++){scanf("%d",&array[i]);}

   for(int i=0;i<n;i++)
   {
    if(array[i]%2==0)
    {
        even[count1]=array[i];
        count1++;

    } 
     else//(!(array[i]%2==0))
    {
        odd[count2]=array[i];
        count2++;

    } 
   }
   even[count1],odd[count2];


   printf("The Even sorted array is:\n");
   
   for(int i=0;i<count1;i++)
   {
    if(count1==0)
    {
        printf("None is even");break;
    }
    printf("%d  ",even[i]);

   }
   printf("\n");

   
    printf("The Odd sorted array is:\n");
    for(int i=0;i<count2;i++)
   {
    if(count2==0)
    {
        printf("None is Odd");break;
    }
    printf("%d \t",odd[i]);

   }

   }


