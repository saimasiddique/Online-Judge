//I love PIZZA
#include<stdio.h>
#include<string.h>
int main()
{
    int tst,m,a,g,r,i,t,len,tg,pizza,j;
    char ar[600];
    scanf("%d ",&tst);
    for(j=0; j<tst; j++)
    {
        pizza=0;
        gets(ar);
        a=g=t=i=t=m=r=0;
        len=strlen(ar);
        for(tg=0; tg<len; tg++)
        {
            if(ar[tg]=='A')
                ++a;
            else if(ar[tg]=='M')
                ++m;
            else if(ar[tg]=='R')
                ++r;
            else if(ar[tg]=='G')
                ++g;
            else if(ar[tg]=='I')
                ++i;
            else if(ar[tg]=='T')
                ++t;
        }
        for(; m>=1 && a>=3 && g>=1 && r>=2 && i>=1 && t>=1; m--,a-=3,g--,r-=2,i--,t--)
            pizza++;
        printf("%d\n",pizza);
    }

    return 0;
}
