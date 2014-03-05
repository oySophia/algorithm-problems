#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int i, n, tt, l[110], r[110];
	char s[220];
	while(cin >> n) {
		cin >> s;
		tt = 2 * n;
		for(i = 0; i < tt; ++i) { 
			if(i < n) {
				l[i] = s[i] - '0';
			} else {
				r[i - n] = s[i] - '0';
			}
		}
		sort(l, l + n);
		sort(r, r + n);
		tt = 0;
		if(l[0] > r[0]) {
			for(i = 1; i < n; ++i) {
				if(l[i] <= r[i]) {
					tt = 1;
					break;
				}
			}
		} else if(l[0] < r[0]) {
			for(i = 1; i < n; ++i) {
				if(l[i] >= r[i]) {
					tt = 1;
					break;
				}
			}
		} else {
			tt = 1;
		}
		if(tt == 0) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}
	return 0;
}
