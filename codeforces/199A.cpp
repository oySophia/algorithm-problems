#include <iostream>

using namespace std;

int main() {
	long long n, i, a, b, c;
	//cout << "ouyang1\n";
	while(cin >> n) {
		if(n > 1) {
		   //cout << "ouyang\n"
		   a = b = 1;
		   	for(i = 2; i < n; ++i) {
				c = a + b;
				if(c == n) {
					break;
				} else {
					a = b;
					b = c;
				}
			}
			cout << "0 " << a << " " << b << endl;
		} else if(n == 1){
			cout << "0 0 1" << endl; 
		} else {
			cout << "0 0 0" << endl;
		}
	}
	return 0;
}
