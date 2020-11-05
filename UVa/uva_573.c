//the snail

#include <stdio.h>

int main()
{
	int H, D, F, i;
	float U, ans, f;

	while(1)
	{
		scanf("%d %f %d %d", &H, &U, &D, &F);
		if(H == 0) break;
		i = 1;
		ans = 0;
		f = U*F/100;
		while(1){
			ans += U;
			if(U > 0)
				U -= f;
			if(ans > H) break;
			ans -= D;
			if(ans < 0) break;
			i++;
		}
		if(ans < 0)
			printf("failure on day %d\n", i);
		else
			printf("success on day %d\n", i);
	}
	return 0;
}
