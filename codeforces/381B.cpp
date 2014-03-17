#include <iostream>
#include <algorithm>

using namespace std;

long long m, b, f[5010], r[5010], l[5010], bb[5010];

int main() {
	long long i, j;
	cin >> m;
	j = 0;
	for(i = 0; i <  m; ++i) {
		cin >> b;
		f[b]++;
		j = j > b? j: b;
	}
	if(m == 1) {
		cout << "1\n" << b << endl;
		return 0;
	}
	long long k = 0, ll = 0;
	for(i = 0; i <= j; ++i) {
		if(f[i]) {
			bb[k++] = i;
		}
//		cout << f[i] << endl;
	}
	sort(bb, bb + k);
	r[0] = bb[k - 1];
	j = 1;
	for(i = k - 2; i >= 0; --i) {
		r[j++] = bb[i];
		if(f[bb[i]] > 1) {
			l[ll++] = bb[i];
		}
	}
	cout << k + ll << endl;
	for(i = ll - 1; i >= 0; --i) {
		cout << l[i] << " ";
	}
	for(i = 0; i < j; ++i) {
		cout << r[i] << " ";
	}
	cout << endl;
	return 0;
}
