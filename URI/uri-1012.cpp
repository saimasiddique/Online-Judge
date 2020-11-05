///Area

#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,t,cr,tr,s,r;
    cin>>a>>b>>c;
    t=.5*a*c;
    cr=3.14159*c*c;
    tr=.5*(a+b)*c;
    s=b*b;
    r=a*b;
    printf("TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\nQUADRADO: %.3f\nRETANGULO: %.3f\n",t,cr,tr,s,r);

    return 0;
}
