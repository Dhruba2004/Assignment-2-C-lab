#include<stdio.h>
main ()
{
double a,i,j;
int b,c,d,e,f,g,h;
printf("Enter num:");
scanf("%lf",&a);
b=a;
c=b%10;
d=b/10;
e=d%10;
f=d/10;
g=f*10+c;
h=g*10+e;
i=a-b;
j=h+i;
printf("%lf",j);
}
