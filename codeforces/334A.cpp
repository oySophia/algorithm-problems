#include <iostream>

using namespace std;

int main() {
	int n, i, j, tmp1, tmp2, len;
	while((cin >> n) != 0) {
		tmp1 = n / 2;
		tmp2 = n * n;
		len = 1;
		for(i = 0, j = 1; i < n; ++i) {
			for(j = 1; j <= tmp1; ++j) {
				cout << len << " " << tmp2 + 1 - len << " ";
				++len; 
			}
			cout << "\n";
		}
	}
	return 0;
}
