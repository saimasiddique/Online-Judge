#include<stdio.h>
int main()
{
    long long int n,N;
    while(scanf("%lld",&n)==1)
    {

    if(n<0)
        break;
        N=((n*(n+1))/2)+1;
        printf("%lld\n",N);

    }
return 0;
}
