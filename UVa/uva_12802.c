//Gift from the god

#include<stdio.h>
int main()
{
    int n,a,i,rev,cnt,rem;
    while(scanf("%d",&n)==1)
    {

        a=n;

       rev=0;
       while(n!=0)
       {
          rem=n%10;
          rev=rev*10+rem;
          n=n/10;
       }
       cnt=0;
      for(i=2;i<=a/2;i++)
      {
       if(a%i==0)
       {
      cnt++;
      break;
       }
      }
       printf("%d\n",2*a);

      if(a==rev)

          if(cnt==0)
            break;

    }
    return 0;
}

