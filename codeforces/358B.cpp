#include <iostream>
#include <string>
#include <cctype>

using namespace std;

long long n, len;
string a, s1, s2;

int main() {
	long long i;
	cin >> n;
	for(i = 0; i < n; ++i) {
		cin >> a;
		s1 += "<3" + a;
	}
	s1 += "<3";
//	cout << s1 << endl;
	cin >> s2;
	len = s2.size();
	for(i = 0; i < len; ++i) {
		if(isdigit(s2[i]) == 0 && isdigit(s2[i]) && s2[i] != '<' && s2[i] != '>') {
			cout << "no\n";
			return 0;
		}
	}
	len = s1.size();
	string::size_type pos = 0;
	for(i = 0; i < len; ++i) {
		s2 = s2.substr(pos);
		pos = s2.find(s1[i]);
		if(pos == string::npos) {
			cout << "no\n";
			return 0;
		} else {
			pos++;
		}
	}
	cout << "yes" << endl;
	return 0;
}


