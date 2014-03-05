#include <iostream>
#include <cstring>

#define MAX 1000001

using namespace std;

int main() {
	int n, a[310], i;
	char s[MAX];
	long long sum;
	while((cin >> n) != 0) {
		sum = 0;
		strcpy(s, "");
		for(i = 0; i < n; ++i) {
			cin >> a[i];
			sum += a[i];
		}
		while(sum) {
			for(i = 0; i < n - 1; ++i) {
				if(a[i] == 0) {
					strcat(s, "R");
				} else {
					a[i]--;
					sum--;
					if(sum == 0) {
						strcat(s, "P");
						break;
					} else {
						strcat(s, "PR");
					}
				}
			}
			if(sum == 0) {
				break;
			}
			for(i = n - 1; i > 0; --i) {
				if(a[i] == 0) {
					strcat(s, "L");
				} else {
					a[i] --;
					sum--;
					if(sum == 0) {
						strcat(s, "P");
						break;
					} else {
						strcat(s, "PL");
					}
				}
			}
		}
		cout << s << "\n";
	}
	return 0;
}
