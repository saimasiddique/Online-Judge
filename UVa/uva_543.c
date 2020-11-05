#include<stdio.h>
#include<math.h>
#define N 1000000
char P[N];
void  sieve( );
int main()
{
      sieve();
      int a=0,i,j,n=40,temp,flag,op1,op2;
      while(scanf("%d",&n)==1 && n>=6 && n<=1000000){
                  if(n==0)
                        break;
            else{
                        for(i=2;i<n;i++){
                              flag=0;
                              op1=n-i;
                              if(P[op1]==1){
                                    if(P[i]==1){
                                          op2=i;
                                          flag=1;
                                          break;
                                    }
                              }
                        }

                        if(flag==1)
                              printf("%d = %d + %d\n",n,op2,op1);
                              else
                              printf("Goldbach's conjecture is wrong.\n");
            }
            }

             return 0;
}

void sieve( )
{
      int i,j,root;
           for(i=0;i<N;i++)
                  P[i]=1;
                  P[0]=P[1]=0;
      root=sqrt(N);
                  for(i=2;i<=root;i++)
                              if(P[i]==1){
                                    for(j=2;i*j<=N;j++)
                                          P[i*j]=0;
                            }

}
