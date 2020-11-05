#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        string s;
        cin>>s;
        bool ans;
        ans=true;
        int n=s.size();
        for(int i=1;i<n;i++)
        {
            if(s[i]!=s[i-1]){
                ans=false;
                break;
            }
        }
        if(ans)
        {
            cout<<s<<"\n";
        }
        else
        {
            string st="";
            for(int i=0;i<n;i++)
                st+="10";
            cout<<st<<"\n";
        }
    }


    return 0;

}
