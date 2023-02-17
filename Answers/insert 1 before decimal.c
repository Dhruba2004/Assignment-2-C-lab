#include<stdio.h>
main ()
{
    double a,b,c;
    int x,y;
    printf("Enter the number:");
    scanf("%lf",&a);
    x=a;
    b=a-x;
    y=x*10+1;
    c=y+b;
    printf("%lf",c);

}