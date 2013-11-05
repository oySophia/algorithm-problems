#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//文件操作不需要包含额外的头文件，之需要stdio.h即可
//产生了一个low 到 up 间的随机数，其实还可以用 srand() 来产生一个随机数的种子；tim(0)表示时间：1970年1月1日（时间戳）；

int main() {
	FILE *fp;
	int num = 50;
	int low, up;
	low = 50;
	up = 100;
	if((fp = fopen("num_list1.txt", "wt+")) == NULL) { //wt+: write and also can read;
		printf("Cannot create or open the file num_list.tex\n");
		exit(1);
	}

	srand((unsigned) time(0)); //we want every time random function gets different result, then we should give a changable seed, not an integer 1 or 2 or 3...
	while(num) {
		fprintf(fp, "%d ", rand() % (up - low + 1) + low); //if we want some float numbers, then we can have the x (%x) be a certain float.
		--num;
	}

	fclose(fp);
	return 0;
}
