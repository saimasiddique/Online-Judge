#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,c,sum,l;
    char a[1000];
    while(scanf("%d",&t)==1)
    {
        while(t--)
        {
            scanf("%s",a);
            sum=0;
            c=0;
            l=strlen(a);
            for(i=0;i<l;i++)
            {
                if(a[i]=='O')
                {
                    c+=1;
                }
                else
                {
                    c=0;
                }
                sum+=c;

            }
            printf("%d\n",sum);
        }
    }

    return 0;
}
