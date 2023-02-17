#include<stdio.h>
 int main () {
    double n,x,c1,c2;
    int d;
    printf("Enter a number");
    scanf("%lf",&n);
    d=n;
    x=n-d;
    c1=0.1+(x/10);
    c2=d+c1;
    printf("The required number is %lf",c2);
    return 0;
    }