#include<stdio.h>
int main()
{
    int h[105],n,i,sum,avg,cnt=0;
    while(scanf("%d",&n)==1)
    {
        if(n==0) break;

        sum=0;
        for(i=0;i<n;i++)
        {
           scanf("%d",&h[i]) ;
           sum+=h[i];

        }
        printf("Set #%d\n",++cnt);
        avg=sum/n;
        sum=0;
        for(i=0;i<n;i++)
        {
            if(h[i]>avg)
            {
                sum+=h[i]-avg;
            }
        }
        printf("The minimum number of moves is %d.\n",sum);

    }

return 0;

}
