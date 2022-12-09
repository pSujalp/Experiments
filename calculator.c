#include<stdio.h>
int main()
{
    float a,b;
    int c,d;
        printf("Enter two number's\n");
    scanf("%f %f",&a,&b);
    c=a;
    d=b;

    printf("The sum is %f \n",a+b);
    printf("The diff is %f \n",a-b);
    printf("The division is %lf \n",a/b);
    printf("The modulus is %d",c%d);
    printf("The multiplication  is %f \n",a*b);
    return 0;

}