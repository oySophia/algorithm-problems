#include <iostream>

using namespace std;

int main() {
	int n, a[100], r[32], c[32], i, j;
	while(cin >> n) {
		for(i = 0; i < n; ++i) {
			r[i] = c[i] = 0;
		}
		for(i = 0; i < n; ++i) {
			for(j = 0; j < n; ++j) {
				cin >> a[i * n + j];
				r[i] += a[i * n + j];
				c[j] += a[i * n + j];
			}
		}
		int num = 0;
		for(i = 0; i < n; ++i) {
			for(j = 0; j < n; ++j) {
				if(c[i] > r[j]) {
					num++;
				}
			}
		}
		cout << num << "\n";
	}
	return 0;
}
