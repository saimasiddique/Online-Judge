#include<stdio.h>
#include<math.h>
int main()
{
long num,i,j,bin,paici,a,b,p,q,ans;
while(scanf("%ld",&num)==1)
{
if(num==0)    break;
ans=0;
for(i=3;i!=0;i+=2)
    {
    bin=1;
    paici=1;
    a=i;
    b=num-i;
    if(a>b) break;
    if(a%2!=0)
        {
        p=(int)sqrt(a);
        for(j=3;j<=p;j+=2)
            {
            if(a%j==0)
                {
                bin=0; break;
                }
            }
        if(bin==1)
            {
            if(b%2!=0)
                {
                q=(int)sqrt(b);
                for(j=3;j<=q;j+=2)
                    {
                    if(b%j==0)
                        {
                        paici=0;    break;
                        }
                    }
                if(paici==1)
                    ans=ans+1;
                }
            }
        }
    }
if(num==4)
printf("1\n");
else
printf("%ld\n",ans);

}
return 0;
}
