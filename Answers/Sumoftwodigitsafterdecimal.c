#include<stdio.h>
int main (){
    int b,d,e,f,g;
    float a,c;
    printf("Enter a number:");
    scanf("%f",&a);
    b=a;
    c=a-b;
    d=c*100;
    e=d%10;
    f=d/10;
    g=e+f;
    printf("The sum of two digits after decimal is %d",g);
    return 0;
}