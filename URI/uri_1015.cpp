///Distance Between Two Points
#include<bits/stdc++.h>
using namespace std;


int main()
{
    double x1,y1,x2,y2,dis;
    cin>>x1>>y1>>x2>>y2;
    dis=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    cout<<fixed<<setprecision(4)<<dis<<endl;

    return 0;
}
