#include <iostream>

using namespace std;

long long n, a, sum;

int main() {
	long long i;
	cin >> n;
	for(i = 0; i < n; ++i) {
		cin >> a;
		sum += a;
	}
	if(sum % n) {
		cout << n - 1 << endl;
	} else {
		cout << n << endl;
	}
	return 0;
}
