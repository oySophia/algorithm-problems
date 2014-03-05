#include <iostream>

using namespace std;

int main() {
	int n, times, ans, i, j, mark;
	long long ids[1010];
	while(cin >> n) {
		ans = mark = 0;
		for(i = 0; i < n; ++i) {
			cin >> ids[i];
		}
		for(i = 0; i < n - 1; ++i) {
			times = 1;
			for(j = i + 1; j < n; ++j) {
				if(ids[i] != 0 && ids[i] == ids[j]) {
					times++;
					if(times > 2) {
						mark = 1;
						break;
					}
				}
			}
			if(mark == 1) {
				break;
			}
			if(times == 2) {
				ans++;
			}
		}
		if(mark == 1) {
			cout << "-1\n";
		} else {
			cout << ans << "\n";
		}
	}
	return 0;
}

