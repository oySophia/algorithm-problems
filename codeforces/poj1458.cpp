#include <iostream>
#include <cstring>

using namespace std;

int main() {
	char s1[1001], s2[1001];
	int i, j, len1, len2, ans;
	int f[1001][1001];
	while(cin >> s1 >> s2) {
		len1 = strlen(s1);
		len2 = strlen(s2);
		for(i = 0; i < len2; ++i) {
			if(s1[0] == s2[i]) {
				f[0][i] = 1;
			} else {
				if(i == 0) {
					f[0][0] = 0;
				} else {
					f[0][i] = f[0][i - 1];
				}
			}
		}
		for(i = 1; i < len1; ++i) {
			for(j = 0; j < len2; ++j) {
				if(s1[i] == s2[j]) {
					if(j != 0) {
						f[i][j] = f[i - 1][j - 1] + 1;
					} else {
						f[i][j] = 1;
					}
				} else {
					if(j == 0) {
						f[i][0] = f[i - 1][j];
					} else {
						f[i][j] = f[i][j - 1] > f[i - 1][j]? f[i][j - 1]: f[i - 1][j];
					}
				}
			}
		}
		ans = 0;
		for(i = 0; i < len2; ++i) {
			ans = ans > f[len1 - 1][i]? ans: f[len1 - 1][i];
		}
		cout << ans << endl;
	}
	return 0;
}
