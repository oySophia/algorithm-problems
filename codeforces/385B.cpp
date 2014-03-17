#include <iostream>
#include <string>

using namespace std;

string s;
long long ans;

int main() {
	size_t pos, start, len;
	ans = 0;
	cin >> s;
	len = s.size();
	start = 0;
	while((pos = s.find("bear")) != string::npos) {
//		cout << pos << endl;
		pos++;
		ans += (pos) * (len - pos - 2);
		start = pos;
		s = s.substr(start);
//		cout << s << endl;
		len = s.size();
	}
	cout << ans << endl;
	return 0;
}


