#include<stdio.h>
int main()
{
    float g,b,h,d,p,i;
    scanf("%f%f%f",&b,&h,&d);
    p=(b/100.0)*12;
    g=h+d+p+b;
    printf("%.2f
%.2f",p,g);
    return 0;
}