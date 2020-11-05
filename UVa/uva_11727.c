#include<stdio.h>
int main()
{
   long long int T,n,a,b,c;
   scanf("%lld",&n);
    for(T=1;T<=n;T++)
    {
       scanf("%lld %lld %lld" ,&a, &b ,&c);

            if((a>b && a<c)||(a>c && a<b))
               printf("Case %lld: %lld\n",T,a);
        else if((b>a && b<c)|| (b<a && b>c))
                printf("Case %lld: %lld\n",T,b);
    else
             printf("Case %lld: %lld\n",T,c);
        }


return 0;
}
