#include <iostream>
#include <string>
#include <map>

using namespace std;

map <string, long long> word_count;
long long n, times;
string num[10] ={"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};

int main() {
	long long i;
	cin >> n;
	string word;
	for(i = 0; i < n; ++i) {
		cin >> word;
		++word_count[word];
		times = word_count[word];
		if(times == 1) {
			cout << "OK" << endl;
		} else {
			int tt[7], tmp = 0;
			string a = word;
			times--;
			while(times) {
				tt[tmp] = times % 10;
				times /= 10;
				tmp++;
			}
			tmp--;
			while(tmp != -1) {
				a += num[tt[tmp]];
				tmp--;
			}
			cout << a << endl;
		}
	}
	return 0;
}
