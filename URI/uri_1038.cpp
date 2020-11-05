#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    float ans;

    cin>>x>>y;
    if(x==1)
    {
        ans=y*4.00;
       printf("Total: R$ %.2f\n",ans);
    }
    else if(x==2)
    {
        ans=y*4.50;
        printf("Total: R$ %.2f\n",ans);
    }
    else if(x==3)
    {
        ans=y*5.00;
        printf("Total: R$ %.2f\n",ans);
    }
    else if(x==4)
    {
        ans=y*2.00;
        printf("Total: R$ %.2f\n",ans);
    }
    else if(x==5)
    {
        ans=y*1.50;
        printf("Total: R$ %.2f\n",ans);
    }


    return 0;
}
