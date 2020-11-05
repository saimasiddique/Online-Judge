#include<stdio.h>
int main()
{
    int p,m,g,i,k,c;
    while(scanf("%d %d",&p,&m)==2)
    {
        c=0;
        while(p--)
        {
            k=0;
            for(i=1;i<=m;i++)
            {
                scanf("%d",&g);
                if(g>0)
                    k++;
            }
            if(k==m)
                c++;
        }
        printf("%d\n",c);
    }
    return 0;
}
