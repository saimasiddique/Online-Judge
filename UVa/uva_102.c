//ecological bin packing
#include <stdio.h>
int main()
{
int b1,g1,c1,b2,g2,c2,b3,g3,c3,i,a[6],min;
while(scanf("%d %d %d %d %d %d %d %d %d",&b1,&g1,&c1,&b2,&g2,&c2,&b3,&g3,&c3)!=EOF)
    {
    a[0]=b2+b3+c1+c3+g1+g2;
    a[1]=b2+b3+c1+c2+g1+g3;
    a[2]=b1+b3+c2+c3+g1+g2;
    a[3]=b1+b2+c2+c3+g1+g3;
    a[4]=b1+b3+c1+c2+g3+g2;
    a[5]=b2+b1+c1+c3+g3+g2;
    for(i=0;i<6;i++)
        {
        if(i==0) min=a[i];
        else if(min>a[i]) min=a[i];
        }
    for(i=0;i<6;i++)
        {
        if(a[i]==min) {
                      if(i==0) printf("BCG %d\nC",a[i]);
                      else if(i==1) printf("BGC %d\n",a[i]);
                      else if(i==2) printf("CBG %d\n",a[i]);
                      else if(i==3) printf("CGB %d\n",a[i]);
                      else if(i==4) printf("GBC %d\n",a[i]);
                      else if(i==5) printf("GCB) %d\n",a[i]);

                      break;
                      }
        }
    }
return 0;
}
