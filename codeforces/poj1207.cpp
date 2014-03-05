#include <iostream>

using namespace std;

int main() {
	long long n, m, i, ans;
	while(cin >> n >> m) {
		ans = 0;
		long long n1 = n, m1 = m;
		if(n > m) {
			n1 = m;
			m1 = n;
		}
		for(i = n1; i <= m1; ++i) {
			long long tt = 1;
			long long j = i;
			while(j > 1) {
				j = j % 2? 3 * j + 1: j / 2;
				tt++;
			}
			ans = ans > tt? ans: tt;
		}
		cout << n << " " << m << " " << ans << endl;
	}
	return 0;
}
