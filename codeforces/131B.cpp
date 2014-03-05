#include <iostream>

using namespace std;

long long n, num[21], ans;
int t;

int main() {
	long long i;
	cin >> n;
	for(i = 0; i < n; ++i) {
		cin >> t;
		num[t + 10] += 1;
	}
	for(i = 0; i < 11; ++i) {
		if(i == 10) {
//			cout << num[i] << endl;
			ans += (num[i] - 1) * num[i] / 2;
		} else {
//			cout << num[i] << " " << num[20 - i] << endl;
			ans += num[i] * num[20 - i];
		}
	}
	cout << ans << endl;
	return 0;
}

