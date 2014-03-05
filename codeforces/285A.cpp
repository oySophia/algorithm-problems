#include <iostream>

using namespace std;

int main() {
	long long n, k, i;
	while(cin >> n >> k) {
		if(k == 0) {
			for(i = 1; i <= n; ++i) {
				cout << i << " ";
			}
		} else {
			for(i = 1; i <= k; ++i) {
				cout << n + 1 - i << " ";
			}
			for(i = 1; i <= n - k; ++i) {
				cout << i << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}
