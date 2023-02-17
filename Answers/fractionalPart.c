#include<stdio.h>
int main () {
    double a;
    int b,c;
    printf("Enter a number:");
    scanf("%lf",&a);
    b=a*10;
    c=b%10;
    printf("The output is %d",c);
    return 0;
}