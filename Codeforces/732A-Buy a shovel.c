//Buy a shovel
#include<stdio.h>
int main()
{

    int k,r,i,c,rem;
    while(scanf("%d %d",&k,&r)==2)
    {

   for(i=1;;i++)
  {
    c=i*k;
    rem=c%10;
    if(rem==0 || rem==r)
    {
        printf("%d\n",i);
        break;
    }
}

    }
    return 0;
}
