#include <stdio.h>
int main()
{
    int a,b,c,d;
    printf("Print any no \n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c) printf("THe greatest no is %d",a);
    else if(b>a && b>c) printf("Greatest no is %d",b);
    else printf("The greatest no is %d",c);
    return 0;
}
