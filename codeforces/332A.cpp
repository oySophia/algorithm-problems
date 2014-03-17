#include <iostream>
#include <string>

using namespace std;

long long n, ans;
string s;

int main() {
	cin >> n;
	cin >> s;
	long long i, len = s.size();
	for(i = 0; i < len;) {
		i = i + n;
		if(i < len) {
			if(s[i - 1] == s[i - 2] && s[i - 2] == s[i - 3]) {
				ans++;
			}
		}
	}
	cout << ans << endl;
	return 0;
}
