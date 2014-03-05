#include <iostream>
#include <map>

using namespace std;

long long a, n;
map <long long, long long> times;

int main() {
	long long i, j;
	cin >> n;
	for(i = 0; i < n; ++i) {
		cin >> a;
		++times[a];
		if(times[a] == 1) {
			cout << a << " ";
		} else {
			while(times[a] > 1) {
				a++;
				++times[a];
			}
			cout << a << " ";
		}
//		cout << endl << "ouyang " << times[a] << endl;
	}
	cout << endl;
	return 0;
}
