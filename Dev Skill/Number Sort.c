//Number Sort
#include<stdio.h>
#include<stdlib.h>

int main()
{
    double item[1000];
    int T,C;
    int a,b,t;


    while(scanf("%d",&T)==1)
    {
  while(T--)
  {

  scanf("%d",&C);
    for(a=0;a<C;a++)
        scanf("%lf",&item[a]);



        for(a=0;a<C;++a)
              for(b=a+1;b<C;b++)
        {

            if(item[a]>item[b])
            {

                t = item[a];
                item[a] = item[b];
                item[b]=t;
            }
        }

        for(t=0;t<C;t++)
            printf("%4lf\t",item[t]);
  }
    }
  return 0;
}


