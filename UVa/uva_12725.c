//Fat and Orial

#include<stdio.h>
int main()
{
    int i,t,A,B;
    double N,M,ans;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lf %lf %d %d",&N,&M,&A,&B);
        ans=((M*(A+B))-(N*A))/B;
        if(ans>=0.0 && ans<=10.00)
            printf("Case #%d: %.2lf\n",i,ans);
        else printf("Case #%d: Impossible\n",i);

    }
    return 0;
}
