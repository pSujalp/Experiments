#include<stdio.h>


int main()
{
int n;
printf("Enter the number elemnts entered in the array ");
scanf("%d",&n);
   int a[n];
   for(int i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
   }
  // int n=sizeof(a)/sizeof(a[0]);
   int temp;
for(int i=0;i<n;i++)
{
    for(int j=i+1;j<n;j++)
    {
        if(a[j]<a[i])
        {
        temp=a[j];
        a[j]=a[i];
        a[i]=temp;
        }
       else continue;
    }
}
      for(int i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }


}