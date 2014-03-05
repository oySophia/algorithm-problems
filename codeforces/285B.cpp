#include <iostream>

using namespace std;

int main() {
	long long n, s, t, i, p[100010];
	while(cin >> n >> s >> t) {
		int mark = 0;
		long long num = 0;
		for(i = 0; i < n; ++i) {
			cin >> p[i];
			if(p[i] == i + 1 && t != s) {
				if(s == p[i] || t == p[i]) {
					mark = 1;
				}
			}	
		}
		if(mark == 1) {
			cout << "-1\n";
		} else {
			if(t == s) {
				cout << "0\n";
			} else {
				while(s != t) {
					s = p[s - 1];
					num++;
					if(num == n + 1) {
						break;
					}
//					cout << s << "\n";
				}
				if(num == n + 1) {
					cout << "-1\n";
				} else {
					cout << num << endl;
				}
			}
		}
	}
	return 0;
}
