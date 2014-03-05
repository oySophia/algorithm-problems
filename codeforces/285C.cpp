#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	long long n, a[300010], i, ans;
	while(cin >> n) {
		ans = 0;
		for(i = 0; i < n; ++i) {
			cin >> a[i];
		}
		sort(a, a + n);
		for(i = 0; i < n; ++i) {
			if(a[i] > i + 1) {
				ans += a[i] - (i + 1);
			} else {
				ans += i + 1 - a[i];
			}
		}
		cout << ans << "\n";
	}
	return 0;
}
