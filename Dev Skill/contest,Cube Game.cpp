#include<bits/stdc++.h>

using namespace std;
int main()

{
    long long int p,b,s,g,r,m,i,sum[10000],t;

    while(scanf("%lld",&p)==1)
    {
        m=0;
        for(i=0;i<p;i++)
        {
            scanf("%lld %lld %lld %lld",&b,&s,&g,&r);
            sum[i]=b*1+s*3+g*10+r*-5;
            if(m<sum[i])
            {
                m=sum[i];
            }

        }
        t=0;
        for(i=0;i<p;i++)
        {
            if(sum[i]<0)
            {
                sum[i]=0;
            }
            printf("Player %lld: %lld\n",++t,sum[i]);
        }
        printf("High Score = %lld\n",m);


    }




    return 0;
}
