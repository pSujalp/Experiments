#include<iostream>
using namespace std;

int main()
{
    int i,j,l,m,k,u=10,r=10;
    int sum[u][r];
    cin>>i>>j;
    cin>>l>>m;
    
    int array[10][10],array1[10][10];
    for(int a=0;a<i;a++)
    {
        for(int b=0;b<j;b++)
        {
            cin>>array[a][b];
        }
    }
    for(int a=0;a<i;a++)
    {
        for(int b=0;b<j;b++)
        {
            cin>>array1[a][b];
        }
    }
    for(int  t=0;u<i;u++)
    {
        
        for(int s=0;r<m;r++)
        {
            sum[t][s]=0;
            
            for(k=0;k<j;k++) sum[t][s]=sum[t][s]+array[t][k]*array1[k][s];
        }
       for(int a=0;a<=i;a++)
       {
        for(int b=0;b<=m;b++) cout<<sum[a][b]<<" ";
       }
        cout<<endl;
    }
}