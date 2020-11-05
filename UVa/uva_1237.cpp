///Expert Enough?

#include<bits/stdc++.h>

using namespace std;

int t, d, l[20000], h[20000], q, p;
char m[20000][30];

int main() {
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &d);
		for(int i = 0; i < d; i++)
			scanf("%s %d %d", m[i], &l[i], &h[i]);

		scanf("%d", &q);
		for(int i = 0; i < q; i++) {
			scanf("%d", &p);
			int ind = -1;
			for(int j = 0; j < d; j++) {
				if(p >= l[j] && p <= h[j]) {
					if(ind < 0)
						ind = j;
					else {
						ind = -1;
						break;
					}
				}
			}
			if(ind < 0)
				printf("UNDETERMINED\n");
			else
				printf("%s\n", m[ind]);
		}
		if(t) printf("\n");
	}
}
