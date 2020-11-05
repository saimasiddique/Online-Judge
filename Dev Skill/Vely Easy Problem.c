#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,l,cnt;
    char s[100];
    while(scanf("%d",&t)==1)
    {
        while(t--)
        {
            scanf("%s",s);
            l=strlen(s);
            cnt=0;
            for(i=0;i<l;i++)
            {
                if(s[i]=='r')
                {
                    cnt++;
                }
            }
            if(cnt==0)
            {
                printf("Vely easy\n");
            }
            else
                printf("Not vely easy\n");
        }
    }
    return 0;
}
