#include <iostream>
#include <cstring>

using namespace std;

int main() {
	int n, i, j, k, len;
	char s[33];
	while(cin >> n) {
		for(i = 0; i < n; ++i) {
			cin >> s;
			int ans;
			//cout << (2 << 1) << (0 << 1) << endl;
			for(k = 0; k < 32; k += 8) {
				ans = 0;
				len = k + 7;
				int t = 7;
				for(j = k; j <= len; ++j) {
					if(s[j] - '1' == 0) {
						ans += 1 << t;
					}
					t--;
//					cout << ans;
				}
			//	cout << endl;
				if(k == 24) {
					cout << ans << endl;
				} else {
					cout << ans << ".";
				}
			}
		}
	}
	return 0;
}

