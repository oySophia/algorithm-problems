#include <iostream>

using namespace std;

long long n, h[2], ans;

int main() {
	long long i;
	ans = 0;
	cin >> n;
	cin >> h[0];
	ans += h[0] + 1;
	for(i = 1; i < n; ++i) {
		cin >> h[i % 2];
		ans += h[i % 2] > h[(i - 1) % 2]? h[i % 2] - h[(i - 1) % 2] + 2: h[(i - 1) % 2] - h[i % 2] + 2;
	}
	cout << ans << endl;
	return 0;
}
