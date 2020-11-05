#include<stdio.h>
int main()
{
    int m,n,i,t,a;
    while(scanf("%d %d",&n,&m)==2)
    {
        t=0;
        for(i=0;i<=m;i++)
        {
            t++;
        }
        a=n*t;
        printf("%d\n",a);
    }
    return 0;
}
