#include <iostream>

using namespace std;

long long x, y, z, a, b, c;

int main() {
	cin >> x >> y >> z;
	if((x + y - z) % 2) {
		cout << "Impossible\n";
		return 0;
	}
	a = (x + y - z) / 2;
	c = x - a;
	b = y - a;
	if(a < 0 || b < 0 || c < 0) {
		cout << "Impossible\n";
		return 0;
	}
	cout << a << " " << b << " " << c << endl;
	return 0;
}
