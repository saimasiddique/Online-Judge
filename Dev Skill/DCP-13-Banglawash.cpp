#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t,a,b,c,d,win;


    cin>>t;
    while(t--)
    {
        win=0;
        for(int i=1;i<=2;i++)
        {
            cin>>a>>b>>c>>d;
            if(a+b > c+d)
            {
                win++;
            }
            else
            {
                win=0;
            }
        }

        if(win>1)
        {
            cout<<"Banglawash"<<endl;
        }
        else
            cout<<"Miss"<<endl;
    }

    return 0;
}
