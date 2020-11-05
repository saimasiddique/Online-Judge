#include<stdio.h>
int main()
{
    long long int T,n;
    float F,C,C1,d;
    scanf("%lld",&T);
    for(n=1;n<=T;n++)
    {
        scanf("%f %f",&C,&d);
        F=(9*C/5)+32+d;
        C1=((F-32)*5)/9 ;
        printf("Case %d: %.2f\n",n,C1);

    }
    return 0;

}
