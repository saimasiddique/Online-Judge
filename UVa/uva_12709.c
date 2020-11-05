//not accepted
//FALLING ANT
#include<stdio.h>
int main()
{
int n,max,vol,vol1,i,l,w,h;
while(scanf("%d",&n)==1)
{
if(n==0) break;
 max=0;
 vol1 = 0, vol = 0;
for( i=1;i<=n;i++)
{

scanf("%d%d%d",&l,&w,&h);
if(h>=max)
{
vol = l * w * h;
if(max == h)
{
if(vol>vol1)
{
vol1 = vol;
}
}
if(h>max)
{
max = h;
vol1 = vol;
}
}
}
printf("%d\n",vol1);
}
return 0;
}



















/*#include <stdio.h>

int main()
{
    int n , l , w , h , vol , mxH , mxV ,temp;

    while( scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        mxH = vol = 0 ;
        while( n-- )
        {
            scanf("%d %d %d",&l,&w,&h);

            if( mxH < h )
            {

               //temp=mxH;
               mxH = h ;
               //h=temp;

                vol = l * w * h ;
            }
            else if( mxH == h )

            {
                mxV=0;
                if(mxV<vol)
                {
                   // temp=vol;
                    mxV = vol;
                   // mxV=temp;
                    vol = l * w * h;
                }
                else
                    vol=l * w * h;
            }
        }
        printf("%d\n",vol);
    }
    return 0 ;
}



*/







/*
#include <stdio.h>
#define max(a,b) a > b ? a : b

int n , l , w , h , vol , mxH ;

int main()
{
    while( scanf("%d",&n) && n )
    {
        mxH = vol = 0 ;
        while( n-- )
        {
            scanf("%d %d %d",&l,&w,&h);
            if( mxH < h )
            {
                mxH = h ;
                vol = l * w * h ;
            }
            else if( mxH == h ) vol = max( vol , l * w * h );
        }
        printf("%d\n",vol);
    }
    return 0 ;
}

*/
