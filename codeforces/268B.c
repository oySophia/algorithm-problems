#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, i;
	long ans;
	while(scanf("%d", &n) != EOF) {
		ans = 0;
		for(i = 1; i < n; ++i) {
			ans += i * (n - i);
		}
		printf("%ld\n", ans + n);
	}
	return 0;
}
