#include <iostream>

using namespace std;

long long a[3][3], row[3], total;

int main() {
	int i, j = 0;
	for(i = 0; i < 3; ++i) {
		for(j = 0; j < 3; ++j) {
			cin >> a[i][j];
			row[i] += a[i][j];
		}
		total += row[i];
	}
	total = total / 2;
	for(i = 0; i < 3; ++i) {
		a[i][i] = total - row[i];
	}
	for(i = 0; i < 3; ++i) {
		for(j = 0; j < 3; ++j) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}

