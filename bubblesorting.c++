#include<stdio.h>



int main()
{

    int array[]={1,4,6,37,8},temp,k,i,j,l;
   /* for(k=0;k<N;k++)
    {
        cin>>array[k];
    }
*/
    for(i=0;i<sizeof(array)/sizeof(array[0]);i++)
    {
        for(j=i+1;j<sizeof(array)/sizeof(array[0]);j++)
        {
            if(array[i]>array[j])
            temp=array[i];
            array[i]=array[j];
            array[j]=temp;
        }
        for(l=0;l<sizeof(array)/sizeof(array[0]);l++)
        {
            printf("%d",array[l]);
        }
    }

}