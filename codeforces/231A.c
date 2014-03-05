#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, a, b, c, i, ans;
	while(scanf("%d", &n) != EOF) {
		ans = 0;
		for(i = 0; i < n; ++i) {
			scanf("%d%d%d", &a, &b, &c);
			a = a + b + c;
			if(a >= 2) {
				ans++;
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}
