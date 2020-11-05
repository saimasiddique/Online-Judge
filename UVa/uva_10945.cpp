#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1000],a[1000];
    int len,l,i,c,d;
    while(1)
    {
        gets(s);
        len=strlen(s);

        l=-1;
        for(i=0;i<len;i++)
        {
            if(s[i]!='.' && s[i]!=',' && s[i]!='?' && s[i]!='!' && s[i]!=' ')
                l++;
                a[l]=s[i];
        }
        //printf("%s",a);
if(len=4 && a[0]=='D' && a[1]=='O' && a[2]=='N' && a[3]=='E')
            break;
        else
        {
            c=0;
            d=l-1;
            while(c<=d)
            {
                if(a[c]!=a[d])
                {
                    break;
                }

                c++;
                d--;
            }
            if(c>=d)
            {
                printf("You won't be eaten!\n");
            }
            else
                printf("Uh oh..\n");
        }

    }
    return 0;
}
