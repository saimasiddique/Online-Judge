//Hello World
#include<stdio.h>
#include<math.h>
int main()
{
    long int i,j,n,count=0;
    while(scanf("%ld",&n)==1)

    {
        count++;
        if(n<=0)
            break;
        for(i=1; ; i++)
        {


            j= pow(2,i);
            if(n ==1)
            {
               printf("Case %ld: 0\n",count);
               break;
            }
            else if(j>=n)
            {
                printf("Case %ld: %ld\n",count,i);
                break;
            }
        }
    }
return 0;
}
