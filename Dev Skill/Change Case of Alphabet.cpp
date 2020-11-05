#include<bits/stdc++.h>
using namespace std;

int main()
{
int t,i,l;
cin>>t;
while(t--)
{


    string str;
    cin>>str;
    l=str.length();
    for(i=0;i<l;i++)
    {
        if(str[i]>=97 && str[i]<=122)
	    {
		str[i]=str[i]-32;
	    }
	     else if(str[i]>=65 && str[i]<=92)
	    {
		str[i]=str[i]+32;
	    }
    }
    cout<<str<<endl;

}


}
