#include<bits/stdc++.h>
#define Max 1000000
using namespace std;
int main()
{
long long int n,i,d,an;
char a[Max];
while(cin>>n)
{
    an=0;
    d=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
   for(i=0;i<n;i++)
   {
       if(a[i]=='A')
       {
           an++;
       }
       else if(a[i]=='D')
               {
                 d++;
               }
   }
   if(an>d)
   {
       cout<<"Anton"<<endl;
   }
   else if(d>an)
   {
       cout<<"Danik"<<endl;
   }
   else
   {
       cout<<"Friendship"<<endl;
   }
}

    return 0;
}
