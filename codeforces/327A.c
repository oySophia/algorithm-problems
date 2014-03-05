#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, n, a[102], j, b, t;
	while(scanf("%d", &n) != EOF) {
		j = t = 0;
		for(i = 0; i < n; ++i) {
			scanf("%d", &b);
			if(i == 0) {
				if(b == 0) {
					a[j++] = 1;
				} else {
					a[j++] = -1;
					t++;
				}
			} else {
				if(b == 0) {
					a[j] = a[j - 1] > 0? a[j - 1] + 1: 1;
					++j;
				} else {
					t++;
					a[j] = a[j - 1] > 0? a[j - 1] - 1: -1;
					++j;
				}
			}
		}
		j = -1;
		for(i = 0; i < n; ++i) {
			printf("%d\n", a[i]);
			if(j < a[i]) {
				j = a[i];
			}
		}
		printf("%d\n", t + j);
	}
	return 0;
}
