#include<bits/stdc++.h>
using namespace std;


int main()
{
    double a1,b1,c1,a,b,c;
    scanf("%lf %lf %lf",&a1,&b1,&c1);

    if(a1==b1 && a1<c1){
        a=c1,b=b1,c=a1;
    }
    else if(a1==c1 && a1<b1){
           a=b1,b=a1,c=c1;
    }
    else if(c1==b1 && a1>c1){
        a=a1;
        b=b1;
        c=c1;
    }
    else if(a1==b1 && a1==c1){
        a=a1,b=b1,c=c1;
    }
    else if(a1==c1 && a1>b1){
           a=a1,b=b1,c=c1;
    }
    else if(a1==b1 && a1>c1){
           a=a1,b=b1,c=c1;
    }
    else if(b1==c1 && b1>a1){
           a=b1,b=a1,c=c1;
    }
    else if(a1>c1 && a1>b1){
        a=a1;
        b=b1;
        c=c1;
   }
   else if(a1<b1 && b1>c1){
        a=b1;
        b=a1;
        c=c1;
   }
   else if(c1>b1 && c1>a1){
        a=c1;
        b=b1;
        c=a1;
   }

    if(a>=b+c){
        printf("NAO FORMA TRIANGULO\n");}
   else if((a*a)==((b*b)+(c*c))){
        printf("TRIANGULO RETANGULO\n");}
   else if((a*a)>((b*b)+(c*c))){
        printf("TRIANGULO OBTUSANGULO\n");}
   else if((a*a)<((b*b)+(c*c))){
        printf("TRIANGULO ACUTANGULO\n");}
    if(a==b && a==c){
        printf("TRIANGULO EQUILATERO\n");}

    if((a == b && c!= a )  || (b == c && a!= b) || (c == a && b!=c ))
        printf("TRIANGULO ISOSCELES\n");



return 0;
}

