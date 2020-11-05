//Beat the spread

#include<stdio.h>
int main()
{
    long int t,s,d,a,b,i;
    while(scanf("%ld",&t)==1)
    {
        i=0;
        while(i<t)
        {
            scanf("%ld%ld",&s,&d);
            if(d>s||(s-d)%2!=0)
                printf("impossible\n");
            else
            {
                a=(s-d)/2;
                b=a+d;
                printf("%ld %ld\n",b,a);
            }
            i++;
        }
    }
    return 0;
}
