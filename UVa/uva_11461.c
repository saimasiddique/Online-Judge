//Square
#include<stdio.h>
#include<math.h>
int main()
{
long int num1,num2,x,sqr,i,j,n1,n2;
while(scanf("%ld%ld",&n1,&n2)==2)
       {
           if(n1==0 &&n2==0)break;
           sqr=0;
           num1=sqrt(n1);
           num2=sqrt(n2);
           for(i=num1;i<=num2;i++)
              {
                     x=pow(i,2);
                     if(x>=n1&&x<=n2) sqr++;
                     if(x>n2)break;
             }
         printf("%ld\n",sqr);
       }
return 0;
}
