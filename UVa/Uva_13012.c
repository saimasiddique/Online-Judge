//IDENTIFYING TEA
/*#include<stdio.h>
int main()
{
    while(1){
    int T,a[5],count=0,i;

    scanf("%d",&T);


    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==T)
        {
            count++;
        }

    }
    printf("%d\n",count);

    }
    return 0;
}
*/

#include <stdio.h>
int main()
{
    int n, m , i, count=0;
    while(scanf("%d", &n)!=EOF)
    {
        for(i=0, count=0; i<5; i++)
        {
            scanf("%d", &m);
            if(m==n) count++;
        }
        printf("%d\n", count);
    }
    return 0;
}
