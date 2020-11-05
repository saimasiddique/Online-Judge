//MIRROR CLOCK
#include <stdio.h>
int main()
 {
    int t,a,b;
    scanf("%d", &t);
    while(t--)
    {
    scanf("%d:%d", &a, &b);
    if(b==0)
    {
        a=11-a+1;
    }
    else
        a=11-a;

        if(a<=0)
        a=a+12;
        if(a!=0)
        b=60-b;
        if(b==60)
        b=0;

        printf("%02d:%02d\n",a,b);
    }
    return 0;
}
