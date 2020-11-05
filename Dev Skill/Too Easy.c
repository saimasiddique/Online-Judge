#include<stdio.h>
int main()
{
     int n,t,ans;
      char num[201];
    while(scanf("%d",&t)==1)
    {
        while(t--)
        {
             scanf("%s",num);
    long long remainder = 0;
    for (int i = 0; num[i] != '\0'; ++i)
        remainder = (remainder * 10 + num[i] - '0') % 100000;
        }
    }
    return 0;
}
