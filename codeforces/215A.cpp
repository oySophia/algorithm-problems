#include <iostream>

using namespace std;

int main() {
	int m, n, i, j, k;
	long long a[60], b[60], r[252], max;
	while(cin >> n) {
		for(i = 0; i < n; ++i) {
			cin >> a[i];
		} 
		cin >> m;
		for(i = 0; i < m; ++i) {
			cin >> b[i];
		}
		max = 0;
		k = 0;
		for(i = 0; i < m; ++i) {
			for(j = 0; j < n; ++j) {
				if(b[i] < a[j]) {
					break;
				}
				if(b[i] % a[j] == 0) {
					r[k] = b[i] / a[j];
					//cout << r[i * m + j] << "\n";
					if(max < r[k]) {
						max = r[k];
					}
//					cout << k << " " << r[k] << "\n";
					k++;
				}
			}
		}
		j = 0;
		for(i = 0; i < k; ++i) {
			if(max == r[i]) {
				j++;
			}
		}
		cout << j << "\n";
	}
	return 0;
}
