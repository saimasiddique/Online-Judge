
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,i,n,m,o,si,su,rem;
    while(scanf("%lld",&t)==1)
    {
        for(i=1;i<=t;i++)
        {


        scanf("%lld %lld",&n,&m);
        o=n/m;
        rem=n%m;
        if(rem%2==0)
        {
            si=rem/2;
            printf("%lld\n",si);
            su=si;

        }
        else if(rem%2!=0)
        {
            si=(rem/2)+1;
            su=si-1;

        }

        if(o==1)
        {
            printf("Case #%lld: %lld chocolate, %lld chocolates and %lld chocolates\n",i,si,su);
        }
        else if(si==1)
        {
            printf("Case #%lld: %lld chocolates, %lld chocolate and %lld chocolates\n",i,si,su);
        }
        else if(su==1)
        {
            printf("Case #%lld: %lld chocolates, %lld chocolates and %lld chocolate\n",i,si,su);
        }
        else
            printf("Case #%lld: %lld chocolates, %lld chocolates and %lld chocolates\n",i,si,su);


    }
    }

    return 0;
}
