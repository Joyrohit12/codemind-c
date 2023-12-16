#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d",&d);
    a=(d/3600);
    b=(d-(3600*a))/60;
    c=(d-(3600*a)-(b*60));
    printf("H:M:S-%d:%d:%d
",a,b,c);
}