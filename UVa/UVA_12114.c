/*BACHELOR ARITHMATIC*/
#include<stdio.h>
int main()
{
    int b,s,i=1;
    while(scanf("%d %d",&b,&s)==2)//probability=s/d
    {
        if(b==0 && s==0)break;
        else if(b==1||b==0)printf("Case %d: :-\\\n",i++);//if the desired probability cannot be determined
       // else if(s>b) printf("Case %d: :-)\n",i++);//probability increases
        else if(s>=b)printf("Case %d: :-|\n",i++);//increase or remains the same
        else if(b>s)printf("Case %d: :-(\n",i++);//probability decreases
    }
    return 0;
}


