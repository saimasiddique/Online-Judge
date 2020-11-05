#include<stdio.h>
long long int fibo(long long int n)
{
    if(n==0) return 0;
    if(n==1) return 1;
    long long int fib1,fib2,fib;
    fib1=fibo(n-1);
    fib2=fibo(n-2);
    fib=fib1+fib2;
    return fib;

}

int main()
{
  long long int num,ans;
  while(scanf("%lld",&num)==1)
  {
     ans=fibo(num);
     printf("The Fibonacci number for %lld is %lld\n",num,ans);
  }
  return 0;
}
