#include<stdio.h>
int main()
{
    long long int t,a,b;
    scanf("%lld",&t);
        while(scanf("%lld %lld",&a,&b)==2)
{
        if(a>b)
                printf(">\n");
         else if (a<b)
         printf("<\n");
        else
        printf("=\n");
    }
    return 0;
}

