#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,ans;
        cin>>n;
        ans=0;
        for(int i=1;i<=n/2;i++)
        {
            ans+=pow(2,i);
        }
        cout<<ans<<"\n";

    }


    return 0;
}
