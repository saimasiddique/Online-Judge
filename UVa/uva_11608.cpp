#include<iostream>

using namespace std;
int main()
{
int now[14],need[13],t=0,n,i,j;
    while(cin>>n)
    {
        if(n<0)break;
        now[0]=n;

        for(i=1;i<=12;i++)
        cin>>now[i];
        for(j=0;j<12;j++)
        cin>>need[j];

        cout<<"Case "<<++t<<":\n";

        for(i=0;i<12;i++)
        {
     //       cout<<now[i]<<' '<<need[i]<<now[i]-need[i]<<' ';
            if(now[i]-need[i]>=0)
            {
                now[i+1]=now[i+1]+now[i]-need[i];
                cout<<"No problem! :D\n";
            }
            else
            {
                now[i+1]+=now[i];
                cout<<"No problem. :(\n";
            }
        }
    }
    return 0;
}
