#include <iostream>
#include <cstring>

using namespace std;

char s[1006];
int num[26];

int main() {
	int len, i;
	cin >> s;
	len = strlen(s);
	for(i = 0; i < len; ++i) {
		num[s[i] - 'a'] += 1;
	}
	len = 0;
	for(i = 0; i < 26; ++i) {
//		cout << num[i] << endl;
		if(num[i] % 2) {
			len++;
		}
	}
	if(len % 2 || len == 0) {
		cout << "First\n";
	} else {
		cout << "Second\n";
	}
	return 0;
}
