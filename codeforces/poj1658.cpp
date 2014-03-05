#include <iostream>

using namespace std;

long long a[6];

int main() {
	int n, i, j;
	while(cin >> n) {
		for(i = 0; i < n; ++i) {
			for(j = 0; j < 4; ++j) {
				cin >> a[j];
				cout << a[j] << " ";
			}
//			cout << 2 * a[1] << "\t" << a[0] + a[2] << "\t" << 2 * a[2] << "\t" << a[1] + a[3] << endl;
			if(2 * a[1] == a[0] + a[2] && 2 * a[2] == a[1] + a[3]) {
				cout << 2 * a[3] - a[2] << endl;
			} else {
				cout << a[3] * a[3] / a[2] << endl;
			}
		}
	}
	return 0;
}
