#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,t,ans;
      char num[1000000];
    while(scanf("%d",&t)==1)
    {
        while(t--)
        {
             scanf("%s",num);
    long long int remainder = 0;
    for (int i = 0; num[i] != '\0'; ++i)
    {


        remainder = (remainder * 10 + num[i] - '0') % 100000;
    }
    printf("%lld\n",remainder);

        }
    }
    return 0;
}
