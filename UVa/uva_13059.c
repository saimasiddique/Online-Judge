//Tennis Championship
#include<stdio.h>
int main()
{
    int p,div,i;
    while(scanf("%d",&p)==1)
    {
        i=0;

        while(p>1)
        {
            div=p/2;
            p=p-div;

         i++;
        }

        printf("%d\n",p);

    }
    return 0;
}
/*#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n;
	while (scanf("%lld", &n) == 1)
		printf("%lld\n", n-1);
	return 0;
}

    */
