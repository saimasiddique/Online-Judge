#include<stdio.h>


int main()
{

    long long a,i,sum;
    while(scanf("%lld",&a)==1)
    {
        sum=0;
    if(a>0)
    {
        for(i=1;i<=a;i++)
        {
            sum+=i;
        }
      }

      else if(a<=0)
      {
          for(i=a;i<=1;i++)
            sum+=i;
      }
      printf("%lld\n",sum);
    }
    return 0;
}
