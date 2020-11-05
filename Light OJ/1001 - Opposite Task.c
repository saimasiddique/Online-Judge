#include<stdio.h>
int main()
{
    int t,i,n,a,b;
    while(scanf("%d",&t)==1)
    {
        for(i=1;i<=t;i++)
        {
            scanf("%d",&n);
            a=n/2;
            b=10-a;
            printf("%d %d\n",a,b);
        }
    }

    return 0;
}
