#include <iostream>

using namespace std;

#define R 1e-8

double a[1010];
int f1[1010], f2[1010];

int main() {
	int n, i, j, k;
	while(cin >> n) {
		for(i = 0; i < n; ++i) {
			cin >> a[i];
			f1[i] = f2[i] = 1;
		}
		for(i = 1; i < n; ++i) {
			for(j = 0; j < i; ++j) {
				if(a[i] - a[j] > R) {
					f1[i] = f1[i] > f1[j] + 1? f1[i]: f1[j] + 1;
				}
			}
		}
		for(i = n - 2; i >= 0; --i) {
			for(j = n - 1; j > i; --j) {
				if(a[i] - a[j] > R) {
					f2[i] = f2[i] > f2[j] + 1? f2[i]: f2[j] + 1;
				}
			}
		}
		int ans = f2[0];
		for(i = 0; i < n - 1; ++i) {
			//cout << f1[i] << endl << f2[i] << endl;
			int tmp = 0;
			for(j = i + 1; j < n; ++j) {
				tmp = tmp > f2[j]? tmp: f2[j];
			}
			ans = ans > f1[i] + tmp? ans: f1[i] + tmp;
		}
		ans = ans > f1[n - 1]? ans: f1[n - 1];
		cout << n - ans << endl;
	}
	return 0;
}

