#include<iostream>
using namespace std;

//int a[]={1,5,7,4,3};
class vimala{
public :
int vim=304;
int koj=345534;
 int print(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
}
};

int bubble(int a[],int n)
{
    int k,l,m;
    for(k=0;k<n;k++)
    {
        for(l=k+1;l<n;l++)
        {
            if(a[l]>a[k])
            {
                 m=a[k];
                 a[k]=a[l];
                a[l]=m;
                
               
            }
        }
    }
}
int main()
    {
        int n;
        vimala koja,lanja;
        lanja.vim;
        lanja.koj;
        printf("Enter the number of elements in an array");
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++) scanf("%d",&a[i]);
   
        bubble(a,n);
        koja.print(a,n);
        printf("%d %d",lanja.vim,lanja.koj);


}

