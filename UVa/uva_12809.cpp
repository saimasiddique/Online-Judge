//Mobile SMS
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,m,i,j,k,l;
    int a[1001] , b[1001];
    scanf("%d",&n);
    char er = '"';
    while(n--)
    {
        scanf("%d",&m);
        for(i=0;i<m;i++)
        {
            scanf("%d",&a[i]);
        }
        for(k=0;k<m;k++)
        {
            scanf("%d",&b[k]);
        }
        for(j=0;j<m;j++)
        {
            if(a[j]==0)
            {
                if(b[j]==1)
                 printf(" ");
            }
            if(a[j]==1)
            {
                if(b[j]==1)
                    printf(".");
                else if(b[j]==2)
                    printf(",");
                else if(b[j]==3)
                    printf("?");
                else printf("%c",er);
            }
            if(a[j]==2)
            {
                if(b[j]==1)
                    printf("a");
                else if(b[j]==2)
                    printf("b");
                else if(b[j]==3)
                    printf("c");
                //else pf(""");
            }
            if(a[j]==3)
            {
                if(b[j]==1)
                    printf("d");
                else if(b[j]==2)
                    printf("e");
                else if(b[j]==3)
                    printf("f");
                //else pf(""");
            }
            if(a[j]==4)
            {
                if(b[j]==1)
                    printf("g");
                else if(b[j]==2)
                    printf("h");
                else if(b[j]==3)
                    printf("i");
                //else pf(""");
            }
            if(a[j]==5)
            {
                if(b[j]==1)
                    printf("j");
                else if(b[j]==2)
                    printf("k");
                else if(b[j]==3)
                    printf("l");
                //else pf(""");
            }
            if(a[j]==6)
            {
                if(b[j]==1)
                    printf("m");
                else if(b[j]==2)
                    printf("n");
                else if(b[j]==3)
                    printf("o");
                //else pf(""");
            }
            if(a[j]==7)
            {
                if(b[j]==1)
                    printf("p");
                else if(b[j]==2)
                    printf("q");
                else if(b[j]==3)
                    printf("r");
                else printf("s");
            }
            if(a[j]==8)
            {
                if(b[j]==1)
                    printf("t");
                else if(b[j]==2)
                    printf("u");
                else if(b[j]==3)
                    printf("v");
                //else pf(""");
            }
            if(a[j]==9)
            {
                if(b[j]==1)
                    printf("w");
                else if(b[j]==2)
                    printf("x");
                else if(b[j]==3)
                    printf("y");
                else printf("z");
            }

        }
        printf("\n");
    }
    return 0;
}
