#include <iostream>
#include <algorithm>

using namespace std;

int n, a[110], ans;

int main() {
	int i, j;
	cin >> n;
	for(i = 0; i < n; ++i) {
		cin >> a[i];
	}
	sort(a, a + n);
	for(i = 0; i < n - 1;) {
		for(j = n - 1; j >= 0; --j) {
			if(a[j] == a[i]) {
				break;
			}
		}
		ans += (j - i + 1) / 2;
		i = j + 1;
	}
	cout << ans / 2 << endl;
	return 0;
}


