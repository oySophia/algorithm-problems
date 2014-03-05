#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int i, j, n, a, ans[1000], mark;
	char s[1001];
	while(scanf("%d", &n) != EOF) {
		strcpy(s, "");
		for(i = 0; i < n; ++i) {
			ans[i] = 0;
		}
		mark = 0;
		for(i = 0; i < n; ++i) {
			scanf("%d", &a);
			ans[i] = i == 0? a: ans[i - 1] + a;
			if(a == 0) {
				mark += 1;
			}
		}
		a = 1;
		for(i = n - 1; i >= 0; --i) {
			if(ans[i] != 0 && ans[i] % 9 == 0) {
				if(mark != 0) {
					for(j = 0; j < ans[i] / 5; ++j) {
						strcat(s, "5");
					}
					for(j = 0; j < mark; ++j) {
						strcat(s, "0");
					}
					a = 5;
					break;
				} 
			} 
		}
		if(a == 1) {
			a = mark != 0? 0: -1;
			printf("%d\n", a);
		} else {
			printf("%s\n", s);
		}
	}
	return 0;
}
