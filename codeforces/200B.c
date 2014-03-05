#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, p, i;
	double ans;
	while(scanf("%d", &n) != EOF) {
		ans = 0;
		for(i = 0; i < n; ++i) {
			scanf("%d", &p);
			ans += (double)p / n;
		}
		printf("%.12lf\n", ans);
	}
	return 0;
}
