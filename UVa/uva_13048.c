//BURGER STAND
#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],tc,i,t,cnt,len;
    while(scanf("%d",&tc)==1)
    {
        for(t=1;t<=tc;t++)
        {
            scanf("%s",s);

            len=strlen(s);
            cnt=0;
            for(i=0;i<len;i++)
            {
                if(s[i]=='-')
                {
                    if(s[i+1]!='B'&& s[i+2]!='B' && s[i-1]!='S' && s[i+1]!='S'){
                        cnt++;
                    }
                }
            }
            printf("Case %d: %d\n",t,cnt);
        }
    }
    return 0;
}
