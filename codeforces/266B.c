#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *change(char *s, int len) {
	int i;
	char tmp;
	for(i = 0; i < len - 1;) {
		if(*(s + i) - 'B' == 0) {
			if(*(s + i + 1) - 'G' == 0) {
				tmp = *(s + i);
				*(s + i) = *(s + i + 1);
				*(s + i + 1) = tmp;
				++i;
			}
		}
		++i;
	}
	return s;
}

int main() {
	int n, t, i, len;
	char *s;
	s = (char *) malloc (sizeof(char) * 55);
	while(scanf("%d%d", &n, &t) != EOF) {
		scanf("%s", s);
		len = strlen(s);
		for(i = 0; i < t; ++i) {
			s = change(s, len);
		}
		printf("%s\n", s);
	}
	return 0;
}
		
