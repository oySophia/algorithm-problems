#include <stdio.h>

int n, a, r[32], c[32];

int main() {
//	int n, a[100], r[32], c[32], i, j, num;
	int num, i, j;
	scanf("%d", &n);
	num = 0;
//	for(i = 0; i < n; ++i) {
//		r[i] = c[i] = 0;
//	}
	for(i = 0; i < n; ++i) {
		for(j = 0; j < n; ++j) {
			scanf("%d", &a);
			r[i] += a;
			c[j] += a;
		}
	}
	for(i = 0; i < n; ++i) {
		for(j = n - 1; j >= 0; --j) {
			if(c[i] > r[j]) {
				num++;
			}
		}
	}
	printf("%d\n", num);
	return 0;
}
