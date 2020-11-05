
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,ab,s;
    while(scanf("%d",&t)==1)
    {
        scanf("%d %d %d",&a,&b,&ab);

           s=abs((a-b)-ab);
           printf("%d\n",s);
    }

    return 0;
}
