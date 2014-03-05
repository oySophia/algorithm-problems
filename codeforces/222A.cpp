#include <iostream>

using namespace std;

long long n, k, a[100010];

int main() {
	long long i;
	int mark = 0;
	cin >> n >> k;
	for(i = 0; i < n; ++i) {
		cin >> a[i];
	}
	for(i = k; i < n; ++i) {
		if(a[i] != a[i - 1]) {
			mark = 1;
			break;
		}
	}
	if(mark == 1) {
		cout << "-1\n";
	} else {
		int tt = 1;
		for(i = k - 2; i >= 0; --i) {
			if(a[i] == a[k - 1]) {
				tt++;
			} else {
				break;
			}
		}
		cout << k - tt << "\n";
	}
	return 0;
}
