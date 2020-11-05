#include<stdio.h>

int series(int n)
{
    if(n==1) return 1;
        if(n==2) return 3;
    int a, b,ans;
    a=series(n-1);
    b=series(n-2);
    ans=a+b;
    return ans;
}
int main()
{
    int t,num;
    while(scanf("%d",&t)==1)
    {
        while(t--)
        {
            scanf("%d",&num);
            printf("%d\n",series(num));
        }


    }
    return 0;
}
