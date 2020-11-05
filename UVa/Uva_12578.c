//10:6:2
#include<stdio.h>
#include<math.h>
#define PI acos(-1)
int main()
{
    int n,i,T;
    double circle_area,ch,r,rectengular_area,length,wide;
    scanf("%d",&T);
    for(n=1; n<=T; n++)
    {
        scanf("%lf",&length);
        wide=((6*length)/10);
        r=((2*length)/10);
        circle_area=(PI*r*r);
        ch=(length*wide);
        rectengular_area=(ch-circle_area);
        printf("%.2lf %.2lf\n",circle_area,rectengular_area);

    }

    return 0;


}
