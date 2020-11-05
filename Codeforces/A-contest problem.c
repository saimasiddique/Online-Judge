//Buy a shovel
#include<stdio.h>
int main()
{

    int k,r,sum,d,c;
    scanf("%d %d",&k,&r);
    sum=r+10;
d=abs(k-sum);
    while(k%sum!=0)
    {
        sum=sum+10;
    }

     if(k%sum==0)
    {
        printf("%d\n",k/sum);
    }

if(d>=9)
{
    c=r*k;
    printf("%d",c/r);
}
    return 0;
}
