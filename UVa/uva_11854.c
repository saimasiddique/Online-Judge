//Egypt
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
        while(scanf("%d %d %d",&a,&b,&c)==3)

{
    if(a==0 && b==0 && c==0)
        break;

        if( pow(c,2)== pow(a,2)+ pow(b,2))

            printf("right\n");

            else if(  pow(a,2)== pow(b,2)+ pow(c,2))
                printf("right\n");

            else if( pow(b,2)== pow(c,2)+ pow(a,2) )
                printf("right\n");


        else

        printf("wrong\n");
}

    return 0;
}

