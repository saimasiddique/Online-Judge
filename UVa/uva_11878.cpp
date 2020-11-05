//Homework checker
#include<cstdio>
#include<cstring>
#include<string>
#include<cmath>
#include<iostream>
#include<cctype>
#include<map>
#include<stack>
#include<cstdlib>
#include <queue>
#include <vector>
#include<algorithm>
#define ll long long
#define sc scanf
#define pf printf
#define Pi 2*acos(0.0)
using namespace std;
int main()
{
    int a,b,cnt=0;
    char ch,c[1000];
    while(sc("%d%c%d=%s",&a,&ch,&b,c)==4)
    {
        if(ch=='+')
        {
            if(a+b==atoi(c))
            cnt++;
        }
        else if(ch=='-')
        {
            if(a-b==atoi(c))
            cnt++;
        }
    }
    pf("%d\n",cnt);
    return 0;

}
