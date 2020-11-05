#include<stdio.h>
int main()
{
    int th,n,total,h,day,i;
    while(scanf("%d %d",&th,&n)==2)
    {
        total=0;
        for(i=1;i<=n;i++)
        {
            scanf("%d",&h);
            total+=h;
        }
        if(total>=th)
        {
            printf("Project will finish within 1 day.\n");
        }
        else
        {
           day=th/total+ th%total;
           printf("Project will finish within %d days.\n",day);
        }



    }

    return 0;

}
