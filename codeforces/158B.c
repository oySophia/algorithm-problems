#include <stdio.h>
#include <stdlib.h>

int main() {
	long n, num[4];
	int i, a;
	while(scanf("%ld", &n) != EOF) {
		for(i = 0; i < 4; ++i) {
			num[i] = 0;
		}
		for(i = 0; i < n; ++i) {
			scanf("%d", &a);
			switch(a) {
				case 1:
					num[0]++;break;
				case 2:
					num[1]++;break;
				case 3:
					num[2]++;break;
				case 4:
					num[3]++;break;
				default:
					break;
			}
		}
		num[0] = num[2] > num[0]? 0: num[0] - num[2];
		num[3] = num[3] + num[1] / 2 + num[1] % 2;
		if(num[1] % 2) {
			if(num[0] < 3) {
				num[0] = 0;
			} else {
				num[0] = num[0] - 2;
			}
		}
		num[0] = num[0] % 4 == 0? num[0] / 4: num[0] / 4 + 1;
		printf("%ld\n", num[0] + num[2] + num[3]);
	}
	return 0;
}
