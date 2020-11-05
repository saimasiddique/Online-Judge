#include<stdio.h>
int main()
{
    long long int n,i,T,sum,j;
    while(scanf("%lld",&T)==1)
    {
        for(j=0;j<=T;j++)
        {

            scanf("%lld",&n);
            sum=0;
            for(i=1;i<=n;i++)
            {
                sum+=i;
            }
            printf("%lld\n",sum);
        }
    }
    return 0;

}
