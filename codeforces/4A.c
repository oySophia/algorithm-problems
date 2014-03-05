#include <stdio.h>
#include <stdlib.h>

int main() {
	int w;
	while(scanf("%d", &w) != EOF) {
		(w != 2 && w % 2 == 0)? printf("YES\n"): printf("NO\n");
	}
	return 0;
}
