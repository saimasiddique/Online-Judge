#include<stdio.h>
int main()
{
   long long int n,l[500],r[500],i;
    while(scanf("%lld",&n)==1)
    {

    for(i=0;i<n;i++)
    {
        scanf("%lld %lld",&l[i],&r[i]);

    }
    for(i=0;i<n;i++)
    {
        if(l[i]>r[i])
            printf("%lld\n",i+1);

    }


    }
    return 0;
}
