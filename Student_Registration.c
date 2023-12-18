#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        int n,m,k;
        scanf("%d%d%d",&n,&m,&k);
        if(n<=(m-k))
        {
            printf("YES
");
        }
        else
        {
            printf("NO
");
        }
    }
}