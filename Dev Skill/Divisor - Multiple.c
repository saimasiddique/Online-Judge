#include<stdio.h>

int main()
{
    long long int t,i, a,b,j,cnt;
    while(scanf("%lld",&t)==1)
    {
        for(i=1;i<=t;i++)
        {
            cnt=0;
            scanf("%lld %lld",&a,&b);
            for(j=a;j<=b;j++)
            {
                if(b%j==0 && i%a==0)
                {
                    cnt++;
                }
            }
            printf("Case %lld: %lld\n",i,cnt);
        }
    }
    return 0;
}
