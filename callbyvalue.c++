#include<stdio.h>
#include<conio.h>
int swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;printf("Swap using call by reference is \n");
    printf("%d %d\n",*a,*b);
}

int call(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;printf("Swap using call by  is \n");
    printf("%d %d",a,b);

}
int main()
{
    int b=7,d=8;
   swap(&b,&d);
   call(5,6);
}