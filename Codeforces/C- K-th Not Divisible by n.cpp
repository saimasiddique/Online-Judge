#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
       long long int n,k,ans;
       cin>>n>>k;
       for(int i=1;i<2*k;i++)
       {
           if(i%n!=0)
           {
               ans=i;
           }
       }
       cout<<ans<<"\n";

    }

    return 0;
}
