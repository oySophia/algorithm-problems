#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n, k, j;
	long long a[60];
	while(cin >> n >> k) {
		for(j = 0; j < n; ++j) {
			cin >> a[j];
		}
		if(k > n) {
			cout << "-1\n";
		} else {
			sort(a, a + n);
//		for(j = 0; j < n; ++j) {
//			cout << a[j] << "\t";
//		}
			cout << a[n - k] << " 0\n";
		}
	}
	return 0;
}
