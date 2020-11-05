#include<stdio.h>
int main()
{
    char a[100][100];
    int t,r,c,i,j,k;
    while(scanf("%d",&t)==1)
    {
        for(i=1;i<=t;i++)
        {
            scanf("%d %d",&r,&c);
            for(j=0;j<r;j++)
            {
                for(k=0;k<c;k++)
                {
                    scanf("%s",&a[j][k]);
                }
            }
            for(j=0;j<r;j++)

                for(k=0;k<c;k++)

                    if(a[j][k]=='$')
                    printf("Case %d:\n%d,%d\n",i,j+1,k+1);
                    else
                        printf("Case %d:\nNo Gold\n");



        }
    }
    return 0;
}
