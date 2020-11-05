//Searching for nessy
#include<stdio.h>
int main()
{
    int t,n,m,ans;
    while(scanf("%d",&t)==1)
    {
        while(t--)
        {
            scanf("%d %d",&n,&m);
            ans=(n/3)*(m/3);
            printf("%d\n",ans);
        }
    }
    return 0;
}
