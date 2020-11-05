#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
    int M,N,i,j;           // M: number of heads, N: number of knights
    int m[20010],n[20010]; // m[i]: diameter of head, n[i]: height of knight
    while (scanf("%d %d",&M,&N)){
        if (!M && !N) break;
        for(i=0;i<M;i++) scanf("%d",&m[i]);
        for(i=0;i<N;i++) scanf("%d",&n[i]);

        sort(m,m+M);
        sort(n,n+N);

        long long int paid=0;

        for(i=0,j=0;i<N;i++){
            if(n[i] >= m[j]){
                paid += n[i];
                if(++j == M) break;
            }
        }

        if(j == M) printf("%lld\n",paid);
        else printf("Loowater is doomed!\n");
    }

    return 0;
}
