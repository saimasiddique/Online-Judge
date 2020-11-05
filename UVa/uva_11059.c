//MAXIMUM PRODUCT
#include<stdio.h>
int  main()
{

long long int n,i,j,a[1000],ans,max,t=0;
while(scanf("%lld",&n)==1)
{
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    max=-1;
    for(i=0;i<n;i++)
    {
        ans=1;
        for(j=i;j<n;j++)
        {
            ans*=a[j];
            if(ans>max)
            {
                max=ans;
            }
        }
    }

    if(max<0){
        max=0;
    }
   printf("Case #%lld: The maximum product is %lld.\n\n",++t,max);

}
return 0;
}
