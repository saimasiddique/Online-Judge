#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,s1;
    cin>>s;
    cin>>s1;
    sort(s.begin(),s.end());
    sort(s1.begin(),s1.end());
    cout<<s;
    do{

        cout<<s<<endl;
    }
    while(next_permutation(s.begin(),s.end()));

    return 0;
}
