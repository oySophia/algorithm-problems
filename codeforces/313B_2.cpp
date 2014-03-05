#include <cstring>
#include <iostream>

#define MAX 100010

using namespace std;

int main() {
	long long j, m, i, l, r, ans, f[MAX];
	char s[MAX];
	while(cin >> s) {
		cin >> m;
		j = strlen(s);
		if(s[0] - s[1] == 0) {
			f[0] = 1;
		} else {
			f[0] = 0;
		}
		for(i = 1; i < j - 1; ++i) {
			if(s[i] - s[i + 1] == 0) {
				f[i] = 1 + f[i - 1];
			} else {
				f[i] = f[i - 1];
			}
		}
		for(i = 0; i < m; ++i) {
			ans = 0;
			cin >> l >> r;
			if(s[l - 1] - s[l] == 0) {
				ans = f[r - 2] - f[l - 1] + 1;
			} else {
				ans = f[r - 2] - f[l - 1];
			}
			cout << ans << "\n";
		}
	}
	return 0;
}
