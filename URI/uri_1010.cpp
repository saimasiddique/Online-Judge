///Simple Calculate
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c1,c2,u1,u2;
    float p1,p2,ans;
    cin>>c1>>u1>>p1;
    cin>>c2>>u2>>p2;
    ans=u1*p1+u2*p2;
    printf("VALOR A PAGAR: R$ %.2f\n",ans);

    return 0;
}
