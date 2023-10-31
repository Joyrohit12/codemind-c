#include<stdio.h>
int main()
{
    int x,y;
    float i;
    scanf("%d%d",&x,&y);
    i=(((x-y)*100.00)/x);
    printf("%.2f",i);
}