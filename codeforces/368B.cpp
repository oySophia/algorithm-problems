#include <iostream>
#include <map>

using namespace std;

long long n, ll, a[100010], tt[100010], l[100010], f[100010];
//map <long long, long long> f[100010];

int main() {
	long long num, i, j;
	cin >> n >> ll;
	j = 0;
	for(i = 0; i < n; ++i) {
		cin >> a[i];
		++f[a[i]];
		j = a[i] > j? a[i]: j;
	}
	for(i = 0; i < ll; ++i) {
		cin >> l[i];
	}
	num = 0;
	for(i = 0; i <= j; ++i) {
		if(f[i] != 0) {
			num++;
		}
	}
	tt[0] = num;
	f[a[0]]--;
	for(i = 1; i < n; ++i) {
		if(f[a[i - 1]] == 0) {
			tt[i] = tt[i - 1] - 1;
		} else {
			tt[i] = tt[i - 1];
		}
		f[a[i]]--;
	}
	for(i = 0; i < ll; ++i) {
		cout << tt[l[i] - 1] << endl;
	}
	return 0;
}
