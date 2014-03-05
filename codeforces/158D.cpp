#include <iostream>
#include <cmath>

#define MAX 20010

using namespace std;

int main() {
	long long n, ans;
	int i, j, sq, s[MAX], t[MAX];
	while(cin >> n != 0) {
		ans = 0;
		sq = n / 3;
		for(i = 0; i < n; ++i) {
			cin >> t[i];
			ans += t[i];
		}
		for(i = 2; i <= sq; ++i) { //the edge eliminated
			if(n % i == 0) {
				for(j = 0; j < i; ++j) {
					s[j] = 0;
				}
				for(j = 0; j < n; ++j) {
					s[j % i] += t[j];
				}
				for(j = 0; j < i; ++j) {
					if(s[j] > ans) {
						ans = s[j];
					}
				}
			}
		}
		cout << ans << "\n";
	}
	return 0;
}
