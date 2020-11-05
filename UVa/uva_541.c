#include<stdio.h>
int main()
{
int i,j,bit,n,m[200][200],a,b,c,d,e,f;
while(scanf("%d",&n)==1)
    {
    if(n==0)    break;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            scanf("%d",&m[i][j]);

    e=0;
    f=0;
    for(i=1;i<=n;i++)
        {
        a=0;
        for(j=1;j<=n;j++)
            {
            a=a+m[i][j];
            }

        if(a%2!=0)
            {
            c=i;
            e++;
            }
        }

    for(j=1;j<=n;j++)
        {
        b=0;
        for(i=1;i<=n;i++)
            {
            b=b+m[i][j];
            }
        if(b%2!=0)
            {
            d=j;
            f++;
            }
        }
    if(e==0 && f==0)
    printf("OK\n");
    else if(e==1 && f==1)
    printf("Change bit (%d,%d)\n",c,d);
    else
    printf("Corrupt\n");
    }
return 0;
}
