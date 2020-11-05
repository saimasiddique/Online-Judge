#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d ano(s)\n",n/365);
    n=n%365;
    printf("%d mes(es)\n",n/30);
    n=n%30;
    printf("%d dia(s)\n",n);

    return 0;
}
