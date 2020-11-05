//GCD LCM
#include<stdio.h>
int main()
{
    int n,m,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&m,&n);
        if(n%m==0)
            printf("%d %d\n",m,n);
        else
            printf("-1\n");
    }
    return 0;
}

