#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, i;
	while(scanf("%d", &n) != EOF) {
		printf("%d ", n);
		for(i = 1; i <= n - 1; ++i) {
			printf("%d ", i);
		}
		printf("\n");
	}
	return 0;
}
