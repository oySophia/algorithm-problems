#include <iostream>

using namespace std;

int main() {
	int n, a[1010], i, j, f[1010];
	while(cin >> n) {
		for(i = 0; i < n; ++i) {
			cin >> a[i];
			f[i] = 1;
		}
		int ans = 1;
		for(i = 1; i < n; ++i) {
			for(j = 0; j < i; ++j) {
				if(a[i] > a[j]) {
					f[i] = f[i] < f[j] + 1? f[j] + 1: f[i];
				}
			}
			ans = ans > f[i]? ans: f[i];
		}
		cout << ans << endl;
	}
	return 0;
}
