//Event Planning
#include<stdio.h>
int main()
{
    long frnd,bud,hotel,week,amount,cost,p,i,j,room;
    while(scanf("%ld%ld%ld%ld",&frnd,&bud,&hotel,&week)==4)
    {
        cost=9999999;
        for(i=0; i<hotel; i++)
        {
            scanf("%ld",&amount);
            for(j=0; j<week; j++)
            {
                scanf("%ld",&room);
                p=0;
                if(room>=frnd)
                {
                    p=amount*frnd;
                    if(cost>p)
                        cost=p;
                }
            }
        }
        if(cost>bud)
            printf("stay home\n");
        else
            printf("%ld\n",cost);
    }
    return 0;
}
