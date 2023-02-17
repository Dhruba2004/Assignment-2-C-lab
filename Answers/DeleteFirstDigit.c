#include<stdio.h>
int main ()
{
    double a,b,c;
    int x,y;
    printf("Enter the number:");
    scanf("%lf",&a);
    x=a;
    b=a-x;
    y=x/10;
    c=y+b;
    printf("%lf",c);
    return 0;

}