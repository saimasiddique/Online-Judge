#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    char s[100];
    while(gets(s))
    {
        if(s[0]=='#')
        break;
        int l=strlen(s);
        if(next_permutation(s,s+l))
        puts(s);
        else
        printf("No Successor\n");

    }
    return 0;
}
