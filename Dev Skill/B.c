#include<stdio.h>
int main()
{
    int T,N,Q,G,i,j,ans;
    float P,sum,mul;
    while(scanf("%d",&T)==1)
    {
        for(j=1;j<=T;j++)
        {

        scanf("%d",&N);
        sum=0;
        for(i=1;i<=N;i++)
        {
            scanf("%f %d",&P,&Q);
            mul=P*Q;
            sum+=mul;
        }
        scanf("%d",&G);
        ans=G-sum;
        printf("Case %d: %d",j,ans);
    }

    }


    return 0;
}
