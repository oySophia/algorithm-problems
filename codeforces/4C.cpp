#include <iostream>
//#include <string>
#include <cstring>

using namespace std;

int main() {
	long long n, i, j, times[100010], len, time;
	char s[100010][36], a[50];
	char num[10][2] ={"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"}; 
	while(cin >> n) {
		cin >> s[0];
		times[0] = 0;
		len = 1;
		cout << "OK\n";
		for(i = 1; i < n; ++i) {
			cin >> a;
			for(j = 0; j < len; ++j) {
//				cout << s[j] << a << "\n";
				if(strcmp(a, s[j]) == 0) {
					times[j] = times[j] + 1;
					time = times[j];
					int tt[7];
					int tmp = 0;
					while(time) {
						tt[tmp] = time % 10;
						time /= 10;
						tmp++;
					}
//					cout << "ouyang\n";
					tmp = tmp - 1;
					while(tmp != -1) {
						strcat(a, num[tt[tmp]]);
						tmp--;
					}
					cout << a << "\n";
					break;
				}
			}
			if(j == len) {
				times[len] = 0;
				strcpy(s[len], a);
				cout << "OK\n";
			    len++;
			}		
		}
	}
	return 0;
}
