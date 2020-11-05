//Zapping
#include<stdio.h>

int main()
{
    int a,b,d;
    while(scanf("%d %d",&a,&b)==2)
    {
        if(a==-1 && b==-1)
            break;
        d=abs(a-b);

        if(d>=50)
            d = 100-d;
       printf("%d\n",d);
    }
return 0;
}
