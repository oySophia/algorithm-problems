#include <iostream>
#include <algorithm>

using namespace std;

long long n;

struct User{
	long long id, a;
	static bool byId(const User &x, const User &y) {
		return x.id < y.id;
	}
	static bool byA(const User &x, const User &y) {
		return x.a < y.a;
	}
} uu[300010];

int main() {
	long long i, j;
	cin >> n;
	for(i = 0; i < n; ++i) {
		cin >> uu[i].a;
		uu[i].id = i;
	}
	sort(uu, uu + n, User::byA);
	j = uu[0].a;
	for(i = 1; i < n; ++i) {
		if(uu[i].a <= j) {
			uu[i].a = j + 1;
			j++;
		} else {
			j = uu[i].a;
		}
	}
	sort(uu, uu + n, User::byId);
	for(i = 0; i < n; ++i) {
		cout << uu[i].a << " ";
	}
	cout << endl;
	return 0;
}
