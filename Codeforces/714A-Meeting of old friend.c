#include<stdio.h>
int main()
{
    long long int l1,l2,r1,r2,i,j,cnt;


    while(scanf("%lld %lld %lld %lld %lld",&l1,&r1,&l2,&r2,&k)==5)
    {
    cnt=0;
    for(i=l1;i<=r1;i++)
    {
        for(j=l2;j<=r2;j++)
            if(i==j && i!=k)
            cnt++;
        if(i==j && i==k)
            i++;
    }

    printf("%lld\n",cnt);
    }
    return 0;
}
