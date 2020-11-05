//Google is Feeling Lucky

#include<stdio.h>
int main()
{
    int a,t,j,i,ar[10],max;
    char br[10][100];
    scanf("%d",&t);
    for(i=1;i<=t;i++)

    {
        max=0;
        for(j=0;j<10;j++)
        {

        scanf("%s %d",&br[j],&ar[j]);
        if(ar[j]>max)
            max=ar[j];

        }
        printf("Case #%d:\n",i);
        for(j=0;j<10;j++)
            if(ar[j]==max)printf("%s\n",br[j]);

    }
    return 0;
}
