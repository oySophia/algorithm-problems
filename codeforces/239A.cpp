#include <iostream>

using namespace std;

long long y, k, n;

int main() {
	long long i, start, len;
	cin >> y >> k >> n;
	start = y / k + 1;
	len = n / k;
	if(start > len) {
		cout << "-1\n";
		return 0;
	}
	for(i = start; i <= len; ++i) {
		long long ans = i * k - y;
		if(ans < 1) {
			cout << "-1\n";
			return 0;
		} else {
			cout << ans << " ";
		}
	}
	cout << endl;
	return 0;
}
