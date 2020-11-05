#include <stdio.h>
#include <math.h>

double a[128 * 1024];
int main()
{
    int i = 0;
    unsigned long long n;
    while (scanf("%llu", &n) != EOF) {
        a[i ++] = (double)sqrt(n * 1.0);
    }
    for (; --i >= 0; ) {
        printf("%.4lf\n", a[i]);
    }
    return 0;
}
