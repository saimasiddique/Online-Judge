//Group Reverse
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[105];
    int l,g,d,a,i,j;
    while(scanf("%d",&g)==1)
    {
        if(g==0) break ;
        gets(s);
        l=strlen(s);
        d=l/g;
        for(i=1;i<=g;i++)
        {
            a=i*d;
            for(j=a;j>a-d;j--)
            {
                printf("%c",s[j]);
            }

        }
         printf("\n");
    }
    return 0;
}

