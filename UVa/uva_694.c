#include<stdio.h>
int main()
{
    long long int a,l,c,i,m=0,n;
    while(scanf("%lld %lld",&a,&l)==2)
    {
        if(a<0 && l<0)
            break;
        c=0; i=a; m++;
        while(a<=l)
        {
            c++;
            if(a==1)
                break;
            if(a%2==0)
                a=a/2;
            else
                a=3*a+1;
        }
        printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",m,i,l,c);
    }
    return 0;
}
