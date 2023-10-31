#include<stdio.h>
int main()
{
    int x,y;
    float p;
    scanf("%d%d",&x,&y);
    p=((x-y)*-100.00)/x;
    printf("%.2f",p);
}