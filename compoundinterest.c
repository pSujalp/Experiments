#include<stdio.h>
#include<conio.h>
#include<math.h>

int  main()
{
    double a,b,c,f,d;
    printf("Print Principal\nRate of interest per annum\nTime\nNo of years compounded\n");
    scanf("%lf %lf %lf %lf",&a,&b,&c,&f);
    d=a*(pow((1+b/100),(f*c)));
    printf("compound interest is %f",d-a);
    return 0;
}