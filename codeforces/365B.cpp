#include <iostream>

using namespace std;

long long n, a[100100];

int main() {
	long long i, ans = 2;
	cin >> n;
	for(i = 0; i < n; ++i) {
		cin >> a[i];
	}
	if(n < 3) {
		cout << n << endl;
		return 0;
	}
	long long tmp = 2;
	for(i = 2; i < n; ++i) {
		if(a[i] == a[i - 1] + a[i - 2]) {
			tmp++;
			ans = ans > tmp? ans: tmp;
		} else {
			tmp = 2;
		}
	}
	cout << ans << endl;
	return 0;
}
