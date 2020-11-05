#include <stdio.h>
  int main()
  {

        int num, cube, sum, i,t,j;
        while(scanf("%d",&t)==1)
        {

        for(j=1;j<=t;j++)
        {

        scanf("%d", &num);
           sum=0;
         for(i=1;i <= num;i++)
            {
                cube = i * i * i;
                sum +=cube;

        }


        printf("Case %d: %d\n",j,sum);
        }
        }
        return 0;
  }


