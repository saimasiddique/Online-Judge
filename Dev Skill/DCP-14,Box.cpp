
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    float a,b,c,ar;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        ar=sqrt(a*a+ b*b + c*c);
        printf("%.2f\n",ar);
    }



    return 0;
}
