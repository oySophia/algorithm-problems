#include <iostream>
#include <cstdio>

using namespace std;

int n, a, tt[5005], ans;

int main() {
	int i;
	cin >> n;
	for(i = 0; i < n; ++i) {
		cin >> a;
		tt[a] += 1;
	}
	for(i = 1; i <= n; ++i) {
		//cout << tt[i] << endl;
		if(tt[i] != 0) {
			ans++;
		}
	}
	cout << n - ans << endl;
	return 0;
}

