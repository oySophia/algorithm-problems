#include <iostream>
#include <cstring>

#define MAX 1000001

using namespace std;

int main() {
	int n, a, i, j;
	char s[MAX], l[310][1000], r[310][1000];
	for(i = 0; i < 301; ++i) {
		strcpy(l[i], "");
		if(i == 0) {
			strcat(l[i], "R");
		} else if(i == 1) {
			strcat(l[i], "PR");
		} else {
			strcat(l[i], l[i - 1]);
			strcat(l[i], "LPR");
		}
	}
	strcpy(r[0], "");
	for(i = 1; i < 301; ++i) {
		strcpy(r[i], "");
		if(i > 1) {
			strcat(r[i], r[i - 1]);
			strcat(r[i], "LRP");
		} else {
			strcat(r[i], "P");
		}
	}

	while(cin >> n) {
		strcpy(s, "");
		for(i = 0; i < n; ++i) {
			cin >> a;
			if(i == n - 1) {
				strcat(s, r[a]);
			} else {
				strcat(s, l[a]);
			}

		}
		cout << s << "\n";
	}
	return 0;
}
