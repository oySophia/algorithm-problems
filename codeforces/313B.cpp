#include <iostream>

#define MAX 100010

using namespace std;

int main() {
	long long j, m, i, l, r, ans;
	char s[MAX];
	while(cin >> s) {
		cin >> m;
		for(i = 0; i < m; ++i) {
			ans = 0;
			cin >> l >> r;
			for(j = l - 1; j < r - 1; ++j) {
				if(s[j] - s[j + 1] == 0) {
					ans++;
				}
			}
			cout << ans << "\n";
		}
	}
	return 0;
}
