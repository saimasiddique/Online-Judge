#include<bits/stdc++.h>
#define ll long long
using namespace std;

int is_prime(ll n) {
    ll i;

    for (i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    ll n,m, i, sum, num_primes,t,j;

    scanf("%lld",&t);
    for(j=1;j<=t;j++)
    {

    scanf("%lld %lld", &n,&m);
sum=0;
num_primes=0;
    for (i = n; num_primes <m; i++) {
        if (is_prime(i)) {
            sum += i;
            num_primes++;
        }
    }
    if(sum%2)
    {
        printf("Case %d: Odd\n",j);
    }
    else
        printf("Case %d: Even\n",j);
    }



    return 0;
}
