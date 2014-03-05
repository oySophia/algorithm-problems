#include <iostream> 
#include <cstring>

using namespace std;

int main() {
	int i, k, num[27], mark;
	char s[1020], *tmp;
	while(cin >> k) {
		for(i = 0; i < 26; ++i) {
			num[i] = 0;
		}
		cin >> s;
		mark = strlen(s);
		for(i = 0; i < mark; ++i) {
			num[s[i] - 'a']++;
		}
		strcpy(s, "");
		mark = 0;
		for(i = 0; i < 26; ++i) {
			tmp = new char[2];
			tmp[0] = i + 'a';
			if(num[i] % k == 0) {
				num[i] = num[i] / k;
				while(num[i]) {
					strcat(s, tmp);
					num[i]--;
				}
			} else {
				mark = 1;
				break;
			}
			delete []tmp;
		}
		if(mark == 1) {
			cout << "-1\n";
		} else {
			for(i = 0; i < k; ++i) {
				cout << s;
			}
			cout << "\n";
		}
	}
	return 0;
}

