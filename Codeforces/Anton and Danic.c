#include<stdio.h>
#include<string.h>

int main()
{

char a[100000],ch;
    long long n,i,cnt,count;
    while(1)
    {
    scanf("%lld",&n);


    cnt=0;
    count=0;

    for(i=0;i<=n;i++)
    {
        ch=getchar();
        a[i]=ch;
        if(ch=='A') cnt++;
        else if(ch=='D')count++;

    }


if(cnt>count)
    printf("Anton\n");
else if(cnt<count)
    printf("Danic\n");

else if(cnt==count)
    printf("Friendship\n");

    }
    return 0;
}
