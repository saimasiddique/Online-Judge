//I Love Strings!!!

#include<stdio.h>
int main()
{
    char str[100010], s[1010];
    int t,q,l,i,j,cnt;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",str);
        scanf("%d",&q);
        while(q--)
        {
            scanf("%s",s);
            l=strlen(s);

            cnt=0;
            i=0;
            if(str[0]==s[0])
            {
                for(j=0;j<l;j++)
                {
                    if(str[i]==s[j])
                    {
                        i++;
                    }
                    else if(str[i]=='\0')
                    {
                        cnt=1;
                        break;
                    }
                    else if(str[i]!=s[j])
                    {
                        cnt=1;
                        break;
                    }
                }

                if(cnt==0)
                {
                    printf("y\n");
                }

                else
                {
                    printf("n\n");
                }
            }
        }

    }
    return 0;
}
