#include<stdio.h>
int main (){
    float a;
    int d,x;
    printf("Enter a number:");
    scanf("%f",&a);
    d=a*100;
    x=d%10;
    printf("%d",x);
    return 0;
}