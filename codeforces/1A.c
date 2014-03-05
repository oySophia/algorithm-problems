#include <stdio.h>
#include <stdlib.h>

int main() {
	long long n, m, a;
	while(scanf("%lld%lld%lld", &n, &m, &a) != EOF) {
		n = n / a + ((n % a == 0)? 0: 1);
		m = m / a + ((m % a == 0)? 0: 1);
		printf("%lld\n", n * m);
	}
	return 0;
}
