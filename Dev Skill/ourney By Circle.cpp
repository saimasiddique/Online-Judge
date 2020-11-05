#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int r1,r2,ans,t;
    while(scanf("%lld",&t)==1)
    {

        scanf("%lld %lld",&r1,&r2);
        if(r1>r2)
        {
            ans=2*r1;

        }
        else if(r2>r1)
        {
        ans=2*r2;
        }
        printf("%lld\n",ans);
    }
    return 0;
}
