#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        long long int x,y,a,b,ans;
        cin>>x>>y>>a>>b;
        ans=0;
        if(x>y)
            swap(x,y);
        ans+=(y-x)*a;

        if(b>2*a)
        ans+=2*a*x;
        else
            ans+=x*b;
        cout<<ans<<"\n";


    }


    return 0;

}
