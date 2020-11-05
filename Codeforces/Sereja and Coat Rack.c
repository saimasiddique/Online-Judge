#include<stdio.h>
int main()
{
   long long int n,d,a[200],m,i,total,sum,ans;
    while(scanf("%lld %lld",&n,&d)==2)

    {
        total=0;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
        total+=a[i];
        }

        scanf("%lld",&m);
        sum=(m-n)*d;

        ans=total-sum;

        printf("%lld\n",ans);
    }
    return 0;
}
