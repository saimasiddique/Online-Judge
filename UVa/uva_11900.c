//boiled Eggs
#include<stdio.h>
int main()
{
 int N,i,k,n,P,Q,a[1000],t=1;
 scanf("%d",&N);
 while(t<=N)
 {
  int s=0;
  scanf("%d %d %d",&n,&P,&Q);
  i=1;
  while(i<=n)
  {
   scanf("%d",&a[i]);
   i++;
  }
  k=0;
  for(i=1;i<=n && i<=P;i++)
  {
   s+=a[i];
   if(s>Q)
   break;
   k++;
  }
  printf("Case %d: %d\n",t,k);
  t++;
 }
 return 0;
}

