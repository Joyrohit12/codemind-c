#include<stdio.h>
int main()
{
    int radius;
    float area,perimetre;
    scanf("%d",&radius);
    area=3.14*radius*radius;
    perimetre=2*3.14*radius;
    printf("%.2f",area);
    printf("
%.2f",perimetre);
    return 0;
}