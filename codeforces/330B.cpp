#include <iostream>

using namespace std;

int n, m, a, b, f[1001];

int main() {
	cin >> n >> m;
	for(int i = 0; i < m; ++i) {
		cin >> a >> b;
		f[a] = f[b] = 1;
	}
	int i = 1;
	while(f[i++] == 1);
	i--;
	cout << n - 1 << endl;
	for(int j = 1; j <= n; ++j) {
		if(i != j) {
			cout << i << " " << j << endl;
		}
	}
	return 0;
}
			

