///SALES
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,a[1003],cnt,ans;
    while(cin>>t)
    {
        for(int i=1;i<=t;i++)
        {
            cin>>n;
            for(int j=0;j<n;j++)
            {
                cin>>a[j];
            }
            ans=0;

            for(int k=1;k<n;k++)
            {
            cnt=0;
                for(int l=k-1;l>=0;l--)
                {
                    if(a[l]<=a[k])
                    {
                        cnt++;
                    }

                }
                ans+=cnt;
            }
            cout<<ans<<endl;

        }
    }


    return 0;
}
