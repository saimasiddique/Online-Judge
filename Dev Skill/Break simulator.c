#include<stdio.h>
int main()
{
    int T,i;
    float v,t,a;
while(scanf("%d",&T)==1)
{
    for(i=1;i<=T;i++)
    {
        scanf("%f %f",&v,&t);
        a=-(v/t);
        printf("%0.2f\n",a);
    }
}
return 0;
}
