#include<stdio.h>
#include<conio.h>
int main()
{
int a = 0, b = 1, third_number, i, number;
printf("Enter the number for fibonacci series:");
scanf("%d",&number);
printf("Fibonacci Series for a given number:");
printf("\n%d %d", a, b); 
for(i = 2; i < number; i++) 
{
third_number = a + b;
printf(" %d", third_number);
a=b;
b= third_number;
}
return 0;
}