#include<bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    getline(cin,s);
    for(int i=0;i<s.length();i++ )
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            s[i]=s[i]+32;

        }
        else if(s[i]==' ')
        {
            s[i]='-';
        }

    }
    for(int i=0;i<s.length();i++ )

    cout<<s;



    return 0;
}
