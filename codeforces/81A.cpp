#include <iostream>
#include <map>
#include <string>

using namespace std;

char let[200010];
long long top = 0;
string s;

void put(char a) {
	let[++top] = a;
}

char pop(void) {
	return let[top--];
}

bool isempty() {
	if(top == 0) {
		return true;

	} else {
		return false;
	}
}

int main() {
	long long i = 0, len;
	cin >> s;
	len = s.size();
	for(i = 0; i < len; ++i) {
		if(!isempty()) {
			char aa = pop();
			if(s[i] != aa) {
				put(aa);
				put(s[i]);
			}
		} else {
			put(s[i]);
		}
//		cout << top << endl;
	}
	for(i = 1; i <= top; ++i) {
		cout << let[i];
	}
	cout << endl;
	return 0;
}
