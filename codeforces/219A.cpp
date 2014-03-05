#include <iostream> 
#include <cstring>

using namespace std;

char lookup[26][2];
//{"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "m", "l", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"};

int main() {
	int i, k, num[27], mark;
	char s[1020], lookup[26][2];
	strcpy(lookup[0], "a");	
	strcpy(lookup[1], "b");	
	strcpy(lookup[2], "c");	
	strcpy(lookup[3], "d");	
	strcpy(lookup[4], "e");	
	strcpy(lookup[5], "f");	
	strcpy(lookup[6], "g");	
	strcpy(lookup[7], "h");	
	strcpy(lookup[8], "i");	
	strcpy(lookup[9], "j");	
	strcpy(lookup[10], "k");	
	strcpy(lookup[11], "l");	
	strcpy(lookup[12], "m");	
	strcpy(lookup[13], "n");	
	strcpy(lookup[14], "o");	
	strcpy(lookup[15], "p");	
	strcpy(lookup[16], "q");	
	strcpy(lookup[17], "r");	
	strcpy(lookup[18], "s");	
	strcpy(lookup[19], "t");	
	strcpy(lookup[20], "u");	
	strcpy(lookup[21], "v");	
	strcpy(lookup[22], "w");	
	strcpy(lookup[23], "x");	
	strcpy(lookup[24], "y");	
	strcpy(lookup[25], "z");	
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
//		cout << s << "\n";
		mark = 0;
		for(i = 0; i < 26; ++i) {
			if(num[i] % k == 0) {
				num[i] = num[i] / k;
				while(num[i]) {
//					cout << i << "\n";
					strcat(s, lookup[i]);
					num[i]--;
				}
			} else {
				mark = 1;
				break;
			}
		}
//		cout << s << "\n";
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

