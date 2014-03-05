#include <iostream>

using namespace std;

int main() {
	long long n, m, a, position, ans;
	int i;
	while((cin >> n >> m) != 0) {
		position = 1;
		ans = 0;
		for(i = 0; i < m; ++i) {
			cin >> a;
			if(a >= position) {
				ans += a - position;
			} else {
				ans += n - (position - a);
			}
			position = a;
		}
		cout << ans << "\n";
	}
	return 0;
}

