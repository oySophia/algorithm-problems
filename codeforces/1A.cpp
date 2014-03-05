#include <iostream>

using namespace std;

int main() {
	long long n, m, a;
	while((cin >> n >> m >> a) != 0) {
		n = n / a + ((n % a == 0)? 0: 1);
		m = m / a + ((m % a == 0)? 0: 1);
		cout << n * m << "\n";
	}
	return 0;
}
