//Bee

#include<stdio.h>
int main()
{
long long int n,i,total,female,male,x;
while(scanf("%lld",&n)==1)

{
    if(n<0) break ;
else
    female=1;
     male=0;
     total=1;
     for(i=0;i<n;i++)
     {
         x=male;
         male=total;
         total=male+x+1;
     }
    printf("%lld %lld\n",male,total);



}

return 0;
}
