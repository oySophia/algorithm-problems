#include <iostream>
#include <cstring>
#include <cmath>

#define MAX 1299700

using namespace std;

int main() {
	long n, i, j, tmp, num;
	int a[MAX];
	while(cin >> n) {
		memset(a, true, sizeof(a));
		a[1] = 0;
		for(i = 4; i < MAX; i += 2) {
			a[i] = 0;
		}
		tmp = sqrt(MAX);
		num = 1;
		for(i = 3; i <= tmp; i += 2) {
			if(a[i] == 0) {
				continue;
			}
			num++;
			if(num == n) {
				break;
			}
			int step = i << 1;
			for(j = i * i; j < MAX; j += step) {
				a[j] = 0;
			}
		}
		num = 0;
		for(j = 2; ; ++j) {
			if(num == n) {
				break;
			}
			if(a[j] != 0) {
				cout << j << " ";
				num++;
			}
		}
		cout << "\n";
	}
	//}
	return 0;
}
