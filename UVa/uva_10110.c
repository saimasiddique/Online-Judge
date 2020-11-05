//LIGHT,MORE LIGHT
#include<stdio.h>
#include<math.h>
int main()
{
long long n,r;
while(scanf("%lld",&n)==1)
{
if(n==0)
break;
r=sqrt(n);
if(r*r==n)
printf("yes\n");
else
printf("no\n");
}
return 0;
}
