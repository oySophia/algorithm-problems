#include <iostream>
#include <algorithm>

using namespace std;

long long n, m, a[1010], sum;

int main() {
	long long i, sum2;
	cin >> n >> m;
	for(i = 0; i < m; ++i) {
		cin >> a[i];
		sum += a[i];
	}
	if(sum == n) {
		sum = 0;
		for(i = 0; i < m; ++i) {
			sum += (1 + a[i]) * a[i] / 2;
		}
		cout << sum << " " << sum << endl;
	} else {
		sum = 0;
		long long nn = n;
		sort(a, a + m);
		for(i = 0; i < m; ++i) {
			if(n <= 0) {
				break;
			} else if(n < a[i]) {
				sum += (a[i] + a[i] - n + 1) * n / 2;
				n = 0;
			} else {
				sum += a[i] * (a[i] + 1) / 2;
				n = n - a[i];
			}
		}
		sum2 = 0;
		for(i = 0; i < nn; ++i) {
			sum2 += a[m - 1];
			a[m - 1]--;
			sort(a, a + m);
		}
		cout << sum2 << " " << sum << "\n";
	}
	return 0;
}


