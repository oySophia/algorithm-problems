#include <iostream>

using namespace std;

int main() {
	long long p, tmp1, tmp2, ans, i;
	int x, j;
	while(cin >> p >> x) {
		tmp1 = 1;
		for(i = 0; i < p; ++i) {
			tmp1 *= 10;
		}
		tmp1 = tmp1 - 1;
		tmp2 = 10 * x - 1;
		j = 1;
		for(; j <= 9; ++j) {
			i = j * tmp1;
			if(i % tmp2 == 0 && (i / tmp2) * 10 / (tmp1 + 1)) {
//				cout << tmp1 << "\t" << j << "\t" << tmp2 << "\t" << tmp1 * j << "\n";
				cout << i / tmp2 << "\n";
				break;
			}
		}
		if(j == 10) {
			cout << "Impossible\n";
		}
	}
	return 0;
}

