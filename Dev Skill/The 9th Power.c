#include<stdio.h>
#include<math.h>
int main()
{
    long long int t,n,p,rem,i;
    while(scanf("%lld",&t)==1)
    {
        while(t--)
        {
            p=1;
            scanf("%lld",&n);
            p=pow(9,n);

            rem=p%10;
            printf("%lld\n",rem);
        }
    }
    return 0;
}
