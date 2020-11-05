//Very Easy !!!
#include<stdio.h>
int main()
{
    double n,i,a,j,c,sum;
    while(scanf("%llf%llf",&n,&a)==2)
    {
        sum=0;
        c=1;
        for(j=1; j<=n; j++)
        {
            for(i=1; i<=j; i++)
            {
                c=c*a;
            }
            sum=sum+j*c;
            c=1;
        }
        printf("%llf\n",sum);
    }
    return 0;
}
