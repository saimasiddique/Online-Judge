#include<stdio.h>

int main()
{
    long long int a,b,rem1,rem2,rem3,rev1,rev2,rev3,sum;
  while(scanf("%lld,%lld",&a,&b)==2)
  {
      rev1=0;


      while(a>0)
      {
          rem1=a%10;
          rev1=rev1*10+rem1;
          a=a/10;


      }

rev2=0;

      while(b>0)
      {
          rem2=b%10;
          rev2=rev2*10+rem2;
          b=b/10;

      }

      sum=rev1+rev2;


  rev3=0;
      while(sum>0)
      {
          rem3=sum%10;
          rev3=rev3*10+ rem3;
          sum=sum/10;
      }
      printf("%lld\n",rev3);
  }
  return 0;


}
