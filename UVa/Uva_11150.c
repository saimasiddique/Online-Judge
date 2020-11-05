//uva-11150
//Cola

#include <stdio.h>
int main() {
	int n,sum;
	while(scanf("%d", &n) == 1) {
		 sum = n;
		while(n >= 3) {
			sum += n/3;
			n = n/3 + n%3;
		}
		if(n == 2)	sum++;
		printf("%d\n", sum);
	}
    return 0;
}
/*#include<stdio.h>
int main()
{
int a,n;
while(scanf(“%d”,&n)==1)
{
a=n;
while(n>=3)
{
a=a+(n/3);
n=(n/3)+(n%3);
}
if(n==2)
{
a++;
}
printf(“%dn”,a);
}
return 0;
}*/
