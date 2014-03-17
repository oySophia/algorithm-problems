#include <iostream>
#include <algorithm>

using namespace std;

long long n, m, ss[3010];

int main() {
	long long i;
	cin >> n >> m;
	for(i = 0; i < m; ++i) {
		cin >> ss[i];
	}
	sort(ss, ss + m);
	if(ss[0] == 1 || ss[m - 1] == n) {
		cout << "NO\n";
		return 0;
	}
	if(m < 3) {
		cout << "YES\n";
		return 0;
	}
	for(i = 2; i < m; ++i) {
		if(ss[i - 2] + 1 == ss[i - 1]) {
			if(ss[i - 1] + 1 == ss[i]) {
				cout << "NO\n";
				return 0;
			}
		}
	}
	cout << "YES\n";
	return 0;
}

