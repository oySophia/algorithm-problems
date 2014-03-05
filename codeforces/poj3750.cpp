#include <iostream>
#include <string>

using namespace std;

int main() {
	int n, i, w, s, c[65];
	string name[65];
	char ws[4];
	while(cin >> n) {
		for(i = 0; i < n; ++i) {
			cin >> name[i];
			c[i] = 1;
		}
		cin >> ws;
		w = ws[0] - '0';
		s = ws[2] - '0';
		i = n;
		w = w - 1;
		while(i) {
			int j = s;
			if(c[w]) {
				j--;
			}
			while(j) {
				w = (w + 1) % n;
				if(c[w]) {
					--j;
				}
			}
			c[w] = 0;
			cout << name[w] << endl;
			w = (w + 1) % n;
			--i;
		}
	}
	return 0;
}
