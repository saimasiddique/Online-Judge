//The Coco-Cola Store

# include <stdio.h>
int main()
{
    int n,rem,sum,div;
    while(scanf("%d",&n))
    {
        if(n==0) break;
       sum = 0;
        while(n>=3)
        {
          rem = n%3;
          div = n/3;
          sum+=div;
          n = div+rem;
        }
        if(n==2)
        printf("%d\n",sum+1);
        else
         printf("%d\n",sum);

    }
    return 0;
}




/*#include <stdio.h>
int main()
{
    int i;
    while(scanf("%d",&i)==1){
            if(i==0)
            break;
            printf("%d\n",i/2);
        }
    return 0;
}
*/
