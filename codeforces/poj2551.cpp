#include <iostream>

using namespace std;

long long a;

int main() {
	int i, n;
	while(cin >> n) {
		a = 1;
		i = 1;
		while(1) {
			a = a % n;
			if(a != 0) {
				a = a * 10 + 1;
				++i;
				a = a % n;
			} else {
				break;
			}
		}
		cout << i << endl;
	}
	return 0;
}

