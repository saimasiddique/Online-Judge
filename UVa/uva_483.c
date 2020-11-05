#include<stdio.h>
#include<string.h>

int main()
{
    char a[1000];
    int l,i,b,j;
    while(gets(a))
    {


    l=strlen(a);

    b=-1;
    for(i=0;i<l;i++)
    {
        if(a[i]==' ')

        {
           for(j=i-1;j>b;j--)
   {


               printf("%c",a[j]);
   }

           printf(" ");
               b=i;
        }
    }

        for(i=l-1;i>b;i--)
{


            printf("%c",a[i]);
}
        printf("\n");

    }

    return 0;
}
