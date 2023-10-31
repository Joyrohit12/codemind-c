#include<stdio.h>
int main()
{
    int kmph;
    float mps;
    scanf("%d",&kmph);
    mps=(kmph*1000.00)/3600;
    printf("%.2f",mps);
}