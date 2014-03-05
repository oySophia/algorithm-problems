#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char s[105];
	int mark[105], i, j, length, ans;
	while(scanf("%s", s) != EOF) {
		length = ans = strlen(s);
		for(i = 0; i < length; ++i) {
			mark[i] = 1;
		}
		for(i = 0; i < length - 1; ++i) {
			for(j = i + 1; j < length; ++j)
			if(mark[j] == 1) {
				if(s[i] - s[j] == 0) {
					mark[j] = 0;
					ans--;
				}
			}
		}
		ans % 2 == 0? printf("CHAT WITH HER!\n"): printf("IGNORE HIM!\n");
	}
	return 0;
}
