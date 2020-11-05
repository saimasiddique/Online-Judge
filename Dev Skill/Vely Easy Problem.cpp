#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100];
    int t,l,i,cnt,j;
    while(scanf("%d",&t)==1)
    {
        for(j=1;j<=t;j++)
        {
         getchar();
            gets(s);
            l=strlen(s);
            cnt=0;
            for(i=0;i<l;i++)
            {
                if(s[i]=='r')
                {
                    cnt=1;
                    break;
                }
            }
            if(cnt==1)
                printf("Not vely easy\n");
                else if(cnt==0)
                    printf("Vely easy\n");




        }


    }

    return 0;

}
