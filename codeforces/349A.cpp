#include <iostream>

using namespace std;

int main() {
	long long n;
	int i, mon, n1, n2, mark;
	while(cin >> n) {
		n1 = n2 = mark = 0;
		for(i = 0; i < n; ++i) {
			cin >> mon;
			switch(mon) {
				case 25:
					n1++;
					break;
				case 50:
					if(n1 > 0) {
						n1--;
						n2++;
					} else {
						mark = 1;
					}
					break;
				case 100:
					if(n1 > 0) {
						if(n2 > 0) {
							n1--;
							n2--;
						} else {
							if(n1 > 2) {
								n1 = n1 - 3;
							} else {
								mark = 1;
							}
						}
					} else {
						mark = 1;
					}
					break;
				default:
					break;
			}
		}
		if(mark == 0) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}
	return 0;
}			
