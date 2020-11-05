///The Greatest
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b, c,d,e,f;
    cin>>a>>b>>c;
    d=(a+b+abs(a-b))/2;
    e=(b+c+abs(b-c))/2;
    f=(d+e+abs(d-e))/2;
    cout<<f<<" eh o maior"<<endl;

    return 0;
}
