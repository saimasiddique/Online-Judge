#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,t,sum, count = 0;

	while (scanf("%d", &n), n) {
		count++;
		 sum = 0;
		for (int i = 0; i < n; i++) {
			scanf("%d", &t);
			if (t > 0)
				sum++;
			else
				sum--;
		}
		printf("Case %d: %d\n", count, sum);
	}

	return 0;
}
