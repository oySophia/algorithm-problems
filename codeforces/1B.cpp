#include <iostream>
#include <cstring>

#define MAX 1000020

using namespace std;

int main() {
	long long n, i, len, tlen, row, col, j, mul;
	char s[MAX];
	int mark;
	while(cin >> n) {
		for(i = 0; i < n; ++i) {
			cin >> s;
			col = row = 0;
			tlen = strlen(s);
			j = 0;
			while(s[j] >= 'A' && s[j] <= 'Z') {
				++j;
			}
			mark = 0;
			for(len = j; j < tlen; ++j) {
				if(s[j] == 'C') {
					mark = 1;
					break;
				}
			}
					
			if(mark == 0) {
				len = 0;
				mul = 1;
				while(s[len] - 'A' >= 0) {
					len++;
					//cout << len << "\n";
				}
				//cout << '9' << "\n";
				for(j = len - 1; j >= 0; --j) {
					col += (s[j] - 64) * mul;
					//cout << col << "\n";
					mul *= 26;
				}
				//cout << col << "\n";
				mul = 1;
				for(j = tlen - 1; j > len - 1; --j) {
					row += (s[j] - '0') * mul;
					mul *= 10;
				}
				cout << "R" << row << "C" << col << "\n";
			} else {
				len = 1;
				mul = 1;
				while(s[len] - '0' >= 0 && s[len] - '9' <= 0) {
					len++;
				}
				//cout << "ouyang" << len << "\n";
				for(j = len - 1; j > 0; --j) {
					row += (s[j] - '0') * mul;
//				cout << "ouyang" << row << "\n";
					mul *= 10;
				}
				//cout << "ouyang" << tlen << "\n";
				mul = 1;
				for(j = tlen - 1; j > len; --j) {
					col += (s[j] - '0') * mul;
				//cout << "ouyang" << col << "\n";
					mul *= 10;
				}
				//cout << "col = " << col << "\n";
				strcpy(s, "");
				j = 0;
				while(col != 0) {
					//cout << col << "\n";
					if(col % 26) {
						s[j++] = (col % 26 + 64);
						col = col / 26;
						if(col == 0) {
							break;
						}
					} else {
						s[j++] = (64 + 26);
						col = col / 26 - 1;
						if(col == 0) {
							break;
						}
					}
					//cout << s[j-1] << "\n";
				}
				len = j;
				for(mul = len - 1; mul >= 0; --mul) {
					cout << s[mul];
				}
				cout << row << "\n";
			}
		}
	}
	return 0;
}
