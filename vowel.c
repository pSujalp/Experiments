#include<stdio.h>
#include<string.h>
int main()
{
   char a;
    printf("Print any letter from A to z");
    scanf("%c",&a);

    if(a=='a' || a=='e' || a=='i' || a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U') printf("It's a alphabet");
    else printf("It's not a alphabet");
    return 0;
}