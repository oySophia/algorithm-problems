#include <iostream>
#include <algorithm>

using namespace std;

struct tt{
	int id, times;
	static bool bytimes(const tt &a, const tt &b) {
		return a.times < b.times;
	}
};
tt ans[101];

int main() {
	int n, m, i, j, k, c, t, g;
	char s[101][60];
	while(cin >> n >> m) {
		for(i = 0; i < m; ++i) {
			ans[i].times = 0;
			ans[i].id = i;
			cin >> s[i];
			for(k = 0; k < n - 1; ++k) {
				c = t = g = 0;
				for(j = k + 1; j < n; ++j) {
					if(s[i][j] < s[i][k]) {
						ans[i].times++;
					}
				}
			}
		}
		sort(ans, ans + m, tt::bytimes);
		for(i = 0; i < m; ++i) {
			cout << s[ans[i].id] << endl;
		}
	}
	return 0;
}
