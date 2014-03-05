#include <iostream>

using namespace std;

int main() {
	int n, f[101][101], i, j;
	while(cin >> n) {
		for(i = 0; i < n; ++i) {
			for(j = 0; j <= i; ++j) {
				cin >> f[i][j];
			}
		}
		for(i = 1; i < n; ++i) {
			for(j = 0; j <= i; ++j) {
				if(j == 0) {
					f[i][j] += f[i - 1][j];
				} else if(j == i) {
					f[i][j] += f[i - 1][j - 1];
				} else {
					f[i][j] += f[i - 1][j] > f[i - 1][j - 1]? f[i - 1][j]: f[i - 1][j - 1];
				}
			}
		}
		int ans = 0;
		for(i = 0; i < n; ++i) {
			ans = ans > f[n - 1][i]? ans: f[n - 1][i];
		}
		cout << ans << endl;
	}
	return 0;
}
