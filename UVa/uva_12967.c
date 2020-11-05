#include<stdio.h>
int main()
{
    long long int a[100],i,path,n;

    while(scanf("%lld",&n)==1)
    {
        a[1]=1;
        a[2]=4;
        for(i=0;i<n;i++)
        {
            a[i]=i*a[i-1];
        }
        printf("%lld",)
    }
}
