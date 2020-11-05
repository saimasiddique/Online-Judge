///Palindromes
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

    if(s == string(s.rbegin(), s.rend()))
    {
        cout<<"Yes"<<endl;
    }
    else
        cout<<"No"<<endl;
}


return 0;
}
