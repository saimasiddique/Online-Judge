//Ackermann function
#include<stdio.h>
 int main()
 {
   long long l,u,i,x,count,temp;
   while(scanf("%lld %lld",&l,&u)==2)
   {
     if(l>u)
      {temp=l;
      l=u;
      u=temp;}
     if(l==0 && u==0)
     break;
     long long int max=0,value=0;
     for(i=l;i<=u;i++)
     {
       x=i;
       count=0;
       while(1)
       {
         count++;
         if(x%2!=0)
          x=3*x+1;
          else
          x=x/2;
          if(x==1)
          break;
       }
       if(count>max)
       {max=count;
       value=i;}
     }
     printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",l,u,value,max);
   }
   return 0;
 }
