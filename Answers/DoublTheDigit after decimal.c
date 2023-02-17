#include<stdio.h>
int main (){
    float a,c;
    int b,d,e;
    printf("Enter the number");
    scanf("%f",&a);
    b=a;
    c=a-b;
    d=c*10;
    e=b+d*2;
    printf("The output is %f",e);
    return 0;
}