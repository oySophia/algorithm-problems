#include <iostream>

using namespace std;

int main() {
	int x, y, i;
	long long a, b, tmp, mark;
	while(cin >> x >> y >> a >> b) {
		if(x % y == 0) {
			tmp = x;
		}
		else if(y % x == 0) {
			tmp = y;
		} else {
			tmp = x * y;
			while(x) {
				i = y % x;
				y = x;
				x = i;
			}
			tmp = tmp / y;
		}
		mark = a % tmp == 0? 1: 0;
		cout << b / tmp - a / tmp + mark << "\n";
	}
	return 0;
}
