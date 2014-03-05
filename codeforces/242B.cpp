#include <iostream>
#include <algorithm>

using namespace std;

long long n;

struct Seg{
	long long id, l, r;
	static bool byL(const Seg &x, const Seg &y) {
		return x.l < y.l;
	}
	static bool byR(const Seg &x, const Seg &y) {
		return x.r < y.r;
	}
} seg[100010];

int main() {
	long long i;
	int mark = 0;
	cin >> n;
	for(i = 0; i < n; ++i) {
		cin >> seg[i].l >> seg[i].r;
		seg[i].id = i;
	}
	sort(seg, seg + n, Seg::byL);
	long long ss = seg[0].l;
	sort(seg, seg + n, Seg::byR);
	cout << ss << endl << seg[n - 1].r << endl;
	long long end = seg[n - 1].r;
	i = n - 1;
	while(seg[i].r == end) {
		if(seg[i].l == ss) {
			cout << seg[i].id + 1 << endl;
			mark = 1;
			break;
		}
		--i;
	}
	if(mark == 0) {
		cout << "-1\n";
	}
	return 0;
}


