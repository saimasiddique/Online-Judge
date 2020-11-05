#include<cstdio>

using namespace std;

int C = 0, N, Q;
int main() {

	while(scanf("%d %d", &N, &Q)) {
		if(N == 0 && Q == 0) break;
		C++;
		int m[N], q;
		for(int i = 0; i < N; i++)
			scanf("%d", &m[i]);
		printf("CASE# %d:\n", C);
		for(int i = 0; i < Q; i++) {
			scanf("%d", &q);

			int ans = 0;
			bool found = false;
			for(int j = 0; j < N; j++) {
				if(m[j] < q) ans++;
				if(m[j] == q) found = true;
			}
			if(found)
				printf("%d found at %d\n", q, ans + 1);
			else
				printf("%d not found\n", q);
		}
	}

	return 0;
}
