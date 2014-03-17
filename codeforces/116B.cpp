#include <iostream>

using namespace std;

int n, m, tt[11][11], ans;
char s[11][11];

int main() {
	int i, j;
	cin >> n >> m;
	for(i = 0; i < n; ++i) {
		cin >> s[i];
	}
	for(i = 0; i < n; ++i) {
		for(j = 0; j < m; ++j) {
			if(s[i][j] == 'W') {
				if(i == 0) {
					if(s[i + 1][j] == 'P') {
						ans++;
						s[i + 1][j] = '.';
					} else {
						if(j == 0) {
							if(s[i][j + 1] == 'P') {
								ans++;
								s[i][j + 1] = '.';
							}
						} else if(j == m - 1) {
							if(s[i][j - 1] == 'P') {
								ans++;
								s[i][j - 1] = '.';
							}
						} else {
							if(s[i][j - 1] == 'P') {
								ans++;
								s[i][j - 1] = '.';
							} else {
								if(s[i][j + 1] == 'P') {
									ans++;
									s[i][j + 1] = '.';
								}
							}
						}
					}
				} else if(i == n - 1) {
					if(s[i - 1][j] == 'P') {
						ans++;
						s[i - 1][j] == '.';
					} else {
						if(j == 0) {
							if(s[i][j + 1] == 'P') {
								ans++;
								s[i][j + 1] = '.';
							}
						} else if(j == m - 1) {
							if(s[i][j - 1] == 'P') {
								ans++;
								s[i][j - 1] = '.';
							}
						} else {
							if(s[i][j - 1] == 'P') {
								ans++;
								s[i][j - 1] = '.';
							} else {
								if(s[i][j + 1] == 'P') {
									ans++;
									s[i][j + 1] = '.';
								}
							}
						}
					}
				} else {
					if(s[i + 1][j] == 'P') {
						ans++;
						s[i + 1][j] = '.';
					} else {
						if(s[i - 1][j] == 'P') {
							s[i - 1][j] = '.';
							ans++;
						} else {
							if(j == 0) {      
								 if(s[i][j + 1] == 'P') {
									 ans++;    
									 s[i][j + 1] = '.';  
								}      
							} else if(j == m - 1) { 
									 if(s[i][j - 1] == 'P') {
										 ans++;    
										 s[i][j - 1] = '.';  
									 }      
							} else {   
									if(s[i][j - 1] == 'P') {
									     ans++;    
									     s[i][j - 1] = '.';  
									 } else {      
									     if(s[i][j + 1] == 'P') {
										     ans++;
									    	 s[i][j + 1] = '.';
										}  
									}      
							}       
						}
					}
				}
			}
		}
	}
	cout << ans << endl;
	return 0;
}
