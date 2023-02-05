#include<stdio.h>

int max_min(int arr[],int n)
{

    int max,min;
    max=min=arr[0];
    for(int i=1;i<n;i++)
    {
        if(min>arr[i]) min=arr[i];
        else if(max<arr[i]) max=arr[i];
      //  else continue;
    
    }
    printf("The max value of array %d\n",max);
    printf("The least value of array %d\n",min);



}

int print(int max,int min)
{
    
}

int main()
{
    int n;
    printf("Enter the number of elements :\n");
    scanf("%d",&n);
    int array[n];
    printf("Enter the value of elemets of %d \n",n);
    for(int i=0;i<n;i++) scanf("%d",&array[i]);
    //,15,14,5,145,145,1,34534,12,42,44};
  //  int l=sizeof(array)/sizeof(array[0]);
    max_min(array,n);
}


