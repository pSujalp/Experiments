#include<stdio.h>
#include<conio.h>

int  main()
{
    float a,b,c,f,d;
    printf("Print Principal\nRate of interest per annum\nTime\nNo of years compounded\n");
    scanf("%f %f %f %f",&a,&b,&c,&f);
    d=a*(1+b/f)*f*c;
    printf("compound interest %lf",d);
    return 0;
}