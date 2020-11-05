//BANGLAWASH
#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,b,w,a,t,n,m;
    char ch[1000];
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        b=0;
        t=0;
        a=0;
        w=0;
        scanf("%d",&m);
        getchar();
        for(j=0; j<m; j++)
        {
            scanf("%c",&ch[j]);
        }
        for(k=0; k<m ; k++)
        {

            if(ch[k]=='B')
                b++;
            if(ch[k]=='W')
                w++;
            if(ch[k]=='A')
                a++;
            if(ch[k]=='T')
                t++;
        }
        if(b==0 && w==0 && a>0 && t==0)
        {
              printf("Case %d: ABANDONED\n",i);
        }
         else if(b==0 && t==0)
        {
            printf("Case %d: WHITEWASH\n",i);
        }
        else if(t==0 && w==0)
        {
                 printf("Case %d: BANGLAWASH\n",i);
        }
        else if(b>w)
        {
            printf("Case %d: BANGLADESH %d - %d\n",i,b,w);
        }
        else if(w>b)
        {
            printf("Case %d: WWW %d - %d\n",i,w,b);
        }
        else if(b==w)
        {
            printf("Case %d: DRAW %d %d\n",i,b,t);
        }

    }
    return 0;
}

