#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main()
{
    char a[1002];
    int s,d,i,j,k,l,q;
    bool w;
    while(cin>>a)
    {
        l=strlen(a);

        if(l==1&&a[0]=='0')return 0;

        s=0;
        for(i=0;i<l;i++)
        s+=a[i]-48;

        if(s%9==0)w=true;
        else w=false;

        j=1;q=0;d=s;

        if(w==true)
        while(d!=9&&d>9)
        {q=0;

            while(d!=0)
            {
             q+=d%10;
             d=d/10;
            }
            d=q;

        j++;
        }

        if(w==true)
        printf("%s is a multiple of 9 and has 9-degree %d.\n",a,j);
        else if(w==false)
        printf("%s is not a multiple of 9.\n",a);

    }

    return 0;
}
