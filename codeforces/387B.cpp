#include <iostream>

using namespace std;

long long n, m, a[3010], b[3010], ans;

int main() {
	long long i, j;
	cin >> n >> m;
	for(i = 0; i < n; ++i) {
		cin >> a[i];
	}
	for(i = 0; i < m; ++i) {
		cin >> b[i];
	}
	j = 0;
	for(i = 0; i < m; ++i) {
		if(b[i] >= a[j]) {
			ans++;
			++j;
		}
	}
	ans = ans > n? 0: n - ans;
	cout << ans << endl;
	return 0;
}
