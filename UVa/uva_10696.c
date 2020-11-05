/*#include<stdio.h>
int main()
{
int a,b;
while(scanf("%d",&a)==1)
{
    if(a>100)
b=a-10;
else
b=91;
printf("f91(%d) = %d\n",a,b);}
return 0;
}
*/

#include<stdio.h>

int N;

int f91(int N) {
    if(N <= 100) return f91(f91(N + 11));
    else return N - 10;
}

int main() {
    for(;;) {
        scanf("%d", &N);
        if(N == 0) break;
        printf("f91(%d) = %d\n", N, f91(N));
    }
    return 0;
}

