#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        long long int a,b,ans;
        cin>>a>>b;

        if(a<b)
            swap(a,b);
            //cout<<a<<b;
        if (a%b==0)
        {
            while (int i=1)
            {
                a=a>>i;
                if(a==b) break;
                ans=i;
                i++;
            }


            }
            cout<<ans<<"\n";

        }
        else if (a==b)
            cout<<"0"<<"\n";
        else
            cout<<"-1"<<"\n";



    }


    return 0;

}
