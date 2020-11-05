//Colorful flowers
#include<stdio.h>
#include<math.h>
#define PI acos(-1)


int main()
{
   double a,b,c,rose,violet,sunflower,r,R,triangle,s;
   while(scanf("%lf %lf %lf",&a,&b,&c)==3)
   {
       s=(a+b+c)/2;
       triangle=sqrt(s*(s-a)*(s-b)*(s-c));
       r=triangle/s;
       rose=PI*r*r;
       violet=triangle-rose;
       R=(a*b*c)/(4*triangle);
       sunflower=(PI*R*R)-triangle;
       printf("%.4lf %.4lf %.4lf\n",sunflower,violet,rose);

   }
   return 0;
}
