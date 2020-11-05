#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int tst,a,len,flag,i,j;
    float x,y;
    char ar[20],ar1[10],ar2[10];
    scanf("%d ",&tst);
    for(a=1; a<=tst; a++)
    {
        scanf("%s",ar);
        flag=0;
        len=strlen(ar);
        for(i=0,j=0; i<len; i++)
        {
            if(flag==0 && ar[i]>='0' && ar[i]<='9')
            {
                ar1[j]=ar[i];
                j++;
                ar1[j]='\0';
            }
            else if(ar[i]<'0'||ar[i]>'9')
            {
                flag=1;
                j=0;

            }
            if(flag==1 && ar[i]>='0' && ar[i]<='9')
            {
                ar2[j]=ar[i];
                j++;
                ar2[j]='\0';
            }
        }
        x=atof(ar1);
        y=atof(ar2);
        printf("Case %d: %g\n",a,x*.5+y*.05);
        ar[0]=ar[1]=ar2[0]='\0';
    }
    return 0;
}
