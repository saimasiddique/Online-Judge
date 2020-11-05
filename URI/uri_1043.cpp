#include<bits/stdc++.h>
using namespace std;

int main()
{
    float a,b,c,perm,area;
      while(scanf("%f %f %f",&a,&b,&c)==3){
            if(a+b>c && b+c>a && a+c>b ){
            perm=a+b+c;
            printf("Perimetro = %.1f\n",perm);
      }
            else{
                  area=.5*(a+b)*c;
                  printf("Area = %.1f\n",area);
      }
      }
      return 0;
}
