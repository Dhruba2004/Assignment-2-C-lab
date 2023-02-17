#include<stdio.h>
int main ()
{
    float a,c;
    printf("Enter a number:");
    scanf("%f",&a);
    int b,d,e,f,g,h,i;
    b=a;
    c=a-b;
    d=c*1000;
    e=d%10;
    f=d/10;
    g=f/10;
    h=f%10;
    i=e+g+h;
    printf("Value of k is %d",g);
    printf("\nThe required output is %d",i);
    return 0;
}
    
