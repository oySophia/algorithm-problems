//by analysis, its result's total num is (3 ^ total_n) * 1 or (3 ^total_n) * 2;
//while not can fulfill by for loops, but it is just for 3-branches-tree.
#include <stdio.h>
#include <stdlib.h>

typedef struct tri_node {
	char *s;
	struct tri_node *l;
	struct tri_node *m;
	struct tri_node *r;
} trinode, *tritree;

tritree create_tree(tritree t) {
	t = (tritree) malloc (sizeof(trinode));
	if(t == NULL) {
		return t;
	}
	if(scanf)

int main() {
	char *s1 = "iw", *s2 = "iii", *s3 = "wi";
	int n, total_n, i_n, string_num, i;
	while(scanf("%d", &n) != EOF) {
		//length = 0;
		total_n = n / 3;
		i_num = n % 3;
		for(string_num = 1, i = 0; i < total_n; string_num *= 3);
		for(i = 0; i < length; ++i) {

		}

	}
}
