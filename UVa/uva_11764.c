#include<stdio.h>
int main()
{
int n,i,j,k,h,l,a,b[50];
while(scanf("%d",&a)==1)
{
for(j=1;j<=a;j++)
 {
 h=0;
 l=0;
 scanf("%d",&n);
 for(i=0;i<n;i++)
  scanf("%d",&b[i]);
 for(i=1;i<n;i++)
  {if(b[i]>b[i-1])
   h=h+1;
   if(b[i-1]>b[i])
   l=l+1;}
 printf("Case %d: %d %d\n",j,h,l);
 }
}
return 0;
}
