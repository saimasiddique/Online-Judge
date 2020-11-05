#include<bits/stdc++.h>
using namespace std;

int main()
{

int t;
string s;

cin>>t;
while(t--)
{
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            s[i]=s[i]+32;
        }

    }

    if(s == string(s.rbegin(), s.rend()))
    {
        cout<<"Yes"<<endl;
    }
    else
        cout<<"No"<<endl;
}
return 0;
}
