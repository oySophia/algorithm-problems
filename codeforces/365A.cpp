#include <iostream>
#include <cstdio>

using namespace std;

int n, k, t[10], ans, mark;
long long a;

int main() {
	int i, j;
	scanf("%d%d", &n, &k);
	for(i = 0; i < n; ++i) {
		mark = 0;
		for(j = 0; j < 10; ++j) {
			t[j] = 0;
		}
		cin >> a;
		while(a) {
		//	if(a % 10 > k) {
			//	mark = 1;
			//	break;
			//}
			t[a % 10] += 1;
			a = a / 10;
		}
	//	if(mark != 1) {
		for(j = 0; j <= k; ++j) {
			if(t[j] == 0) {
				mark = 1;
				break;
			}
		}
		//}
		if(mark != 1) {
			ans++;
		}
	}
	printf("%d\n", ans);
	return 0;
}
