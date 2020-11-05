#include<stdio.h>
int main()
{
    int n,T,a,b,i,sum=0;
    scanf("%d",&T);
    for(n=1;n<=T;n++)
    {
        scanf("%d %d",&a,&b);

        for(i=a;i<=b;i++)
        {
          if(i%2!=0)

             sum=sum+i;

        }

printf("Case %d: %d\n",n,sum);
sum=0;
    }

    return 0;
}
