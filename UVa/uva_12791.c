//LAP
#include <stdio.h>

int main() {
	int x,y,diff,ans;
	while (scanf("%d %d",&x,&y)==2) {
		int diff = y-x;
		int ans = y/diff;
		if(y%diff != 0) {
			ans++;
		}
		printf("%d\n",ans);
	}
	return 0;
}
