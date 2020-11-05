#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i;
    double u,d,v,t1,t2,td;

    while(scanf("%d",&t)==1)
    {
        for(i=1;i<=t;i++)
        {
            scanf("%lf %lf %lf",&d,&v,&u);
            if(v==0 || u==0 || v>=u)
            {
                printf("Case %d: can't determine\n",i);
                continue;
            }
            t1=(1.0*d)/(u*1.0);
            t2=(1.0*d)/(sqrt((u*u)-(v*v))*1.0);

            td=abs(t2-t1);

            printf("Case %d: %.3lf\n",i,td);
        }
    }





    return 0;
}
