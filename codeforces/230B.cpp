#include <iostream>
#include <cmath>

using namespace std;

int isprime(long long p) {
	long long a, i;
	int ans, step;
	if(p == 2) {
		return 1;
	}
	if(p % 2 == 0) {
		return 0;
		//cout << "ouyang";
	}
	ans = 1;
	a = sqrt(p); 
	//ans = 1;
	for(i = 3; i <= a; i += 2) {
		if(p % i == 0) {
			ans = 0;
			break;
		}
	}
	return ans;
}

int main() {
	long long i, n, x, tmp;
	while(cin >> n) {
		for(i = 0; i < n; ++i) {
			cin >> x;
			if(x == 1) {
				cout << "NO\n";
			} else {
				tmp = sqrt(x);
				if(tmp * tmp == x && isprime(tmp)) {
	//				cout << tmp << "\n";
					cout << "YES\n";
				} else {
					cout << "NO\n";
				}
			}
		}
	}
	return 0;
}
