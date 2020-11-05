#include<bits/stdc++.h>
#define max 100000000
using namespace std;
int main()

{
    long long int p,b,s,g,r,max,i,sum[max];

    while(scanf("%d",&p)==1)
    {
        max=0;
        for(i=0;i<p;i++)
        {
            scanf("%lld %lld %lld %lld",&b,&s,&g,&r);
            sum[i]=b*1+s*3+g*10+r*-5;
            if(max<sum[i])
            {
                max=sum[i];
            }
        }
        for(i=0;i<p;i++)
        {
            if(sum[i]<0)
            {
                sum[i]=0;
            }
            printf("Player %lld: %lld\n",++i,sum[i]);
        }
        printf("High Score = %lld\n",max);





    }




    return 0;
}
