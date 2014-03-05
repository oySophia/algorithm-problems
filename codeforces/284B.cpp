#include <iostream>
#include <cstring>

using namespace std;

long long n, num[3];
char a[200010];

int main() {
	long long i;
	cin >> n;
	cin >> a;
	for(i = 0; i < n; ++i) {
		switch(a[i]) {
			case 'A':
				num[0]++;
				break;
			case 'F':
				num[1]++;
				break;
			case 'I':
				num[2]++;
				break;
			default:
				break;
		}
	}
	if(num[2] == 0) {
		cout << num[0] << endl;
	} else if(num[2] == 1) {
		cout << "1\n";
	} else {
		cout << "0\n";
	}
	return 0;
}
