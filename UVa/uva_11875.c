//Brick Games
#include<stdio.h>
int main()
{
int n,t,a[100],i,j;
while(scanf("%d",&t)==1)
 {
 for(i=1;i<=t;i++)
  {
  scanf("%d",&n);
  for(j=0;j<n;j++)
  scanf("%d",&a[j]);
  printf("Case %d: %d\n",i,a[j/2]);
  }
 }
 return 0;
}
