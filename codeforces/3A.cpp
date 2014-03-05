#include <iostream>
#include <cstring>

using namespace std;

char s[4], t[4];

int main() {
	int sh, sv, th, tv;
	cin >> s >> t;
	sh = s[1] - '0';
	sv = s[0] - 'a' + 1;
	th = t[1] - '0';
	tv = t[0] - 'a' + 1;
	int step = 0;
	if(sh == th) {
		if(sv > tv) {
			step = sv - tv;
			cout << step << endl;
			for(int i = 0; i < step; ++i) {
				cout << "L\n";
			}
		} else {
			step = tv - sv;
			cout << step << endl;
			for(int i = 0; i < step; ++i) {
				cout << "R\n";
			}
		}
	} else if(sv == tv) {
		if(sh > th) {
			step = sh - th;
			cout << step << endl;
			for(int i = 0; i < step; ++i) {
				cout << "D\n";
			}
		} else {
			step = th - sh;
			cout << step << endl;
			for(int i = 0; i < step; ++i) {
				cout << "U\n";
			}
		}
	} else {
		int gaph, gapv, xx, rr;
		if(sh > th) {
			gaph = sh - th;
			if(sv > tv) {
				gapv = sv - tv;
				if(gapv > gaph) {
					xx = gaph;
					rr = gapv;
					cout << rr << endl;
					for(int i = 0; i < rr; ++i) {
						if(i < xx) {
							cout << "LD\n";
						} else {
							cout << "L\n";
						}
					}
				} else {
					xx = gapv;
					rr = gaph;
					cout << rr << endl;
					for(int i = 0; i < rr; ++i) {
						if(i < xx) {
							cout << "LD\n";
						} else {
							cout << "D\n";
						}
					}
				}
				
			} else {
				gapv = tv - sv;
				if(gapv > gaph) {
					xx = gaph;
					rr = gapv;
					cout << rr << endl;
					for(int i = 0; i < rr; ++i) {
						if(i < xx) {
							cout << "RD\n";
						} else {
							cout << "R\n";
						}
					}
				} else {
					xx = gapv;
					rr = gaph;
					cout << rr << endl;
					for(int i = 0; i < rr; ++i) {
						if(i < xx) {
							cout << "RD\n";
						} else {
							cout << "D\n";
						}
					}
				}
			}
		} else {
			gaph = th - sh;
			if(sv > tv) {
				gapv = sv - tv;
				if(gapv > gaph) {
					rr = gapv;
					xx = gaph;
					cout << rr << endl;
					for(int i = 0; i < rr; ++i) {
						if(i < xx) {
							cout << "LU\n";
						} else {
							cout << "L\n";
						}
					}
				} else {
					rr = gaph;
					xx = gapv;
					cout << rr << endl;
					for(int i = 0; i < rr; ++i) {
						if(i < xx) {
							cout << "LU\n";
						} else {
							cout << "U\n";
						}
					}
				}

			} else {
				gapv = tv - sv;
				if(gapv > gaph) {
					rr = gapv;
					xx = gaph;
					cout << rr << endl;
					for(int i = 0; i < rr; ++i) {
						if(i < xx) {
							cout << "RU\n";
						} else {
							cout << "R\n";
						}
					}
				} else {
					rr = gaph;
					xx = gapv;
					cout << rr << endl;
					for(int i = 0; i < rr; ++i) {
						if(i < xx) {
							cout << "RU\n";
						} else {
							cout << "U\n";
						}
					}
				}

			}
		}
	}
	return 0;
}

