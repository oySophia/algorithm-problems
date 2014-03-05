#include <iostream>

using namespace std;

int main() {
	long long i, n, a[7], sum[7], ans;
	while(cin >> n) {
		cin >> a[0];
		sum[0] = a[0];
		for(i = 1; i < 7; ++i) {
			cin >> a[i];
			sum[i] = sum[i - 1] + a[i];
		}
		n = n % sum[6];
		if(n == 0) {
			n = sum[6];
		}
		for(i = 0; i < 7; ++i) {
			if(n <= sum[i]) {
				ans = i + 1;
				break;
			}
		}
		cout << ans << "\n";
	}
}
