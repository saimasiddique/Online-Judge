#include<bits/stdc++.h>
using namespace std;

int main()
{
   long long int t,i,x,a;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld",&x);
        if(x%2)
        {
            a=(-1)*pow(2,x);
        }
        else
        {
            a=pow(2,x);
        }
        while(a>9 || a<-9)
        {
            a=a/10;
        }


        if(a>=0)
        {
            printf("+%lld\n",a);
        }
        else
            printf("%lld\n",a);
    }


    return 0;
}
