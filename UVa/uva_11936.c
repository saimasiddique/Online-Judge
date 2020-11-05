#include<stdio.h>
int main()
{
    int N,a,b,c;
    scanf("%d",&N);

        while(scanf("%d %d %d",&a,&b,&c)==3)
        {
        if(a+b>c && a+c>b && b+c>a)

            printf("OK\n");

        else
            printf("Wrong!!\n");
        }

return 0;
}
