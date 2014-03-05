#include <iostream>

using namespace std;

int main() {
	long long x, y, x1, y1;
	while(cin >> x >> y) {
		if(x < 0) {
			if(y < 0) {
				x1 = x + y;
				y1 = x + y;
			} else {
				x1 = x - y;
				y1 = y - x;
			}
		} else {
			if(y > 0) {
				x1 = x + y;
				y1 = x + y;
			} else {
				x1 = x - y;
				y1 = y - x;
			}
		}
		if(x1 < 0) {
			cout << x1 << " 0" << " 0 " << y1 << "\n";
		} else {
			cout << "0 " << y1 << " " << x1 << " 0" << "\n";
		}
	}
	return 0;
}
