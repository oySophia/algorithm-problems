#include <iostream>
#include <algorithm>

using namespace std;

long long a[100010], n, t, f, ans, tt;

int main() {
	cin >> n >> t;
	long long j, i;
	for(i = 0; i < n; ++i) {
		cin >> a[i];
	}
	j = 0;
	for(i = 0; i < n; ++i) {
		if(f > t) {
			f = f - a[j];
			++j;
			tt--;
		}
		++tt;
		f += a[i];
		ans = ans > tt? ans: (f > t? tt - 1: tt);
	}
	cout << ans << endl;
	return 0;
}

