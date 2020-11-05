#include<bits/stdc++.h>

using namespace std;
int main()
{
   long long int t,n,i,b,s;
    long long int a[100005];
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n;
        for(long long int j=0;j<n;j++ )
        {
            cin>>a[j];
        }
        s=0;
        for(long long int k=0;k<n;k++)
        {
            for(long long int l=k+1;l<n;l++)
                {
                b=a[k]|a[l];
                s+=b;

                }
        }
        printf("Case %lld: %lld\n",i,s);
    }


    return 0;
}
