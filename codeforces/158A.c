#include <stdio.h>
#include <stdlib.h>

#define MAX 50

int main() {
	int i, n, k, a[MAX], num;
	while(scanf("%d%d", &n, &k) != EOF) {
		num = 0;
		for(i = 0; i < MAX; ++i) {
			a[i] = 0;
		}
		for(i = 0; i < n; ++i) {
			scanf("%d", a + i);
		}
		if(a[k - 1] == 0) {
			for(i = 0; i < n; ++i) {
				num = num + (a[i] - a[k] > 0? 1: 0);
			}
		} else {
			for(i = 0; i < n; ++i) {
				num = num + (a[i] - a[k - 1] >= 0? 1: 0);
			}
		}
		printf("%d\n", num);
	}
	return 0;
}
