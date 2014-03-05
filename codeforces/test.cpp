#include <iostream>

using namespace std;

int main() {
	char a[50];
	cin >> a;
	cout << a;
	int j = 0;
	while(a[j++] != '0');
	int i = 0;
	while(a[i] != '0') {
		++i;
	}
	cout << "j = " << j << "i = " << i << "\n";
	return 0;
}
