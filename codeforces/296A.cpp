#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

int n, a[102], times[102];

int main() {
	int i, j;
	scanf("%d", &n);
	scanf("%d", a);
	for(i = 1; i < n; ++i) {
		scanf("%d", a + i);
		for(j = i - 1; j >= 0; --j) {
			if(a[i] == a[j]) {
				times[i] = times[j] + 1;
//				cout << times[i] << endl;
				break;
			}
		}
	}
	sort(times, times + n);
	if(n % 2 == 0) {
		if(times[n - 1] >= n / 2) {
			printf("NO\n");
		} else {
			printf("YES\n");
		}
	} else {
		if(times[n - 1] > n / 2) {
			printf("NO\n");
		} else {
			printf("YES\n");
		}
	}
	return 0;
}
