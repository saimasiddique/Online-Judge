//CAR
#include<stdio.h>
#include<math.h>
int main()
{
    int  m,T;
    double u,v,t,a,s;
    T=1;
    while (scanf("%d",&m)==1)
    {
        if(m==0) break;

        switch (m)
        {
        case 1:
            scanf("%lf %lf %lf",&u,&v,&t);
            a=(v-u)/t;
            s=u*t+.5*a*t*t;
            printf("Case %d: %.3lf %.3lf\n",T,s,a);
            break;
        case 2:
            scanf("%lf %lf %lf",&u,&v,&a);
            t=(v-u)/a;
            s=u*t+.5*a*t*t;
            printf("Case %d: %.3lf %.3lf\n",T,s,t);
            break;
        case 3:
            scanf("%lf %lf %lf",&u,&a,&s);
            t=(sqrt(u*u+2.0*s*a)-u)/a;
            v=u+a*t;
            printf("Case %d: %.3lf %.3lf\n",T,v,t);
            break;
        case 4:
            scanf("%lf %lf %lf",&v,&a,&s);
            u=sqrt(v*v-2.0*s*a);
            t=(v-u)/a;
            printf("Case %d: %.3lf %.3lf\n",T,u,t);
            break;

            default:
            break;
        }
        T++;
    }
    return 0;
}


/*

#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,case;
    double u,v,s,a,ans,t;
    case=1;
    while(scanf("%d",&n)==1)
    {

    if(n==0)
    break;
    else if (n==1)
         {
                  scanf("%lf%lf%lf",&u,&v,&t);
                  s=((u+v)/2)*t;
                  a=(v-u)/t;
                  printf("Case %d: %.3lf %.3lf\n",case,s,a);
                  case++;
         }

    else if (n==2)
         {
                   scanf("%lf%lf%lf",&u,&v,&a);
                   t=(v-u)/a;
                   s=u*t+.5*a*pow(t,2);
                   printf("Case %d: %.3lf %.3lf\n\n",case,s,t);
                   case++;
         }

    else if (n==3)
         {
                  scanf("%lf%lf%lf",&u,&a,&s);
                  v=sqrt(pow(u,2)+(2*a*s));
                  t=(v-u)/a;
                  printf("Case %d: %.3lf %.3lf\n\n",case,v,t);
                  case++;
         }

    else if (n==4)
         {
                   scanf("%lf%lf%lf",&v,&a,&s);

                  u=sqrt(v*v-2*a*s);
                   t=(v-u)/a;
                    printf("Case %d: %.3lf %.3lf\n\n",case,u,t);
                   case++;
         }



    }
    return 0;
}
*/
