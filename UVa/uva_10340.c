//All in All
#include<stdio.h>
#include<string.h>
int main()
{
long int t,j,i,sum,m,l,n,c,d;
char s[100000],a[100000],b[100000];
while(gets(s))
{
c=0;
sum=0;
m=-1;
l=strlen(s);
for(i=0;i<l;i++)
    {
    m=m+1;
    if(s[i]==' ') break;
    a[i]=s[i];
    }
for(j=m;j<l;j++)
    {
    b[j-m]=s[j];
    c=c+1;
    }
n=m;
d=0;
for(i=0;i<n;i++)
    for(j=d;j<c;j++)
        {
        if(a[i]==b[j])
            {
            sum=sum+1;
            d=j+1;
            break;
            }
        }
if(sum==n)
printf("Yes\n");
else
printf("No\n");
}
return 0;
}
