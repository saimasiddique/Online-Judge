#include<stdio.h>
int main()
{
    int T,n,L,W,H;
    scanf("%d",&T);
    for(n=1;n<=T;n++)
    {
        scanf("%d %d %d",&L,&W,&H);
        if(L<=20 && W<=20 && H<=20)
        {
            printf("Case %d: good\n",n);
        }
        else
            printf("Case %d: bad\n",n);
    }
    return 0;
}
