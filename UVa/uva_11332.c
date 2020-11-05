//SUMMING DIGITS



#include<stdio.h>
int main()
{
int a,b,c,d,i,j,k;
while(scanf("%d",&a)==1)
{
if(a!=0)
{
b=0;
c=0;
d=0;
for(i=a;i!=0;i=i/10)
b=b+i%10;
if(b>=10)
 {
 for(j=b;j!=0;j=j/10)
 c=c+j%10;
 if(c>=10)
  {
  for(k=c;k!=0;k=k/10)
  d=d+k%10;
  printf("%d\n",d);
  }
 else
 printf("%d\n",c);
 }
else
printf("%d\n",b);
}
}
return 0;
}
/*
#include <stdio.h>

int main()
{

    long long int n,t;

  while(scanf("%lld",&n)==1){
      if(n==0)
      break;

        t=0;
        for(; ;)
            {

                while(n!=0){
                        t=t+(n%10);
                        n=n/10;
                }
                if(t/10==0)
                break;
                else
                    {
                    n=t;
                    t=0;
                }
        }

        printf("%d\n",t);
  }

    return 0;
}
