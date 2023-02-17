#include<stdio.h>
int main (){
    double a,c,e,d,f;
    int b;
    printf("Enter the number:");
    scanf("%lf",&a);
    b=a;
    c=a-b;
    d=c/10;
    e=c+d;
    f=b+e;
    printf("The output is %lf",f);
    return 0;
}