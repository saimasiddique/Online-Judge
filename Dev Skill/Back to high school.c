//Back to School\


#include<stdio.h>
int main()
{
    int T,x,y,h,k,i;
    double r,C,ans;
    while(scanf("%d",&T)==1)
    {
        for(i=1;i<=T;i++)
        {
            scanf("%d %d %lf %d %d",&x,&y,&r,&h,&k);
            C=((x-h)*(x-h))+((y-k)*(y-k));
            ans=C-(r*r);
            if(ans>0)
                printf("Case %d: Outside\n",i);

            else if(ans==0)
                printf("Case %d: OnCircle\n",i);

            else if(ans<0)
                printf("Case %d: Inside\n",i);
        }
    }

    return 0;
}


