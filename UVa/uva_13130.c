//Cacho
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a[10],i,c;
    while(scanf("%d",&t)==1)
    {
        while(t--)
        {
            for(i=0;i<5;i++)
            {
                scanf("%d",&a[i]);
            }
            c=0;
            for(i=0;i<5;i++)
            {
                if(a[i]+1==a[i+1])
                {
                    c++;
                }
            }
            if(c==4) printf("Y\n");
            else printf("N\n");
        }
    }
    return 0;
}
