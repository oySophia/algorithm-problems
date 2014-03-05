#include <iostream>
#include <string>

using namespace std;

int k, f[10];
char s[9];

int main() {
	int i;
	cin >> k;
	for(i = 0; i < 4; ++i) {
		cin >> s;
		for(int j = 0; j < 4; ++j) {
			if(s[j] != '.') {
				f[s[j] - '0']++;
			}
		}
	}
	for(i = 1; i < 10; ++i) {
		if(f[i] > 2 * k) {
			cout << "NO\n";
			break;
		}
	}
	if(i == 10) {
	   cout << "YES\n";
	}
	return 0;	
}
