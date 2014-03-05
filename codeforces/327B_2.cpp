#include <iostream>

#define BASE 3000000

using namespace std;

int main() {
	long long n, i;
	while(cin >> n) {
		for(i = 0; i < n; ++i) {
			cout << BASE + i << " ";
		}
		cout << "\n";
	}
	return 0;
}

