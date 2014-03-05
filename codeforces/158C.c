#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int n, i, j, len, t, index, lpath, mark;
	char split[205][205], tmp[205], cmd[205], path[10005];
	while(scanf("%d", &n) != EOF) {
		strcpy(path, "/");
		for(i = 0; i < n; ++i) {
			scanf("%s", cmd);
			if(strcmp(cmd, "cd") == 0) {
				scanf("%s", cmd);
			}
			len = strlen(cmd);
			index = 0;
			if(strcmp(cmd, "pwd") == 0) {
				printf("%s\n", path);
			} else {
				for(j = 0; j < len;) {
					t = 0;
					if(j == 0 && cmd[j] - '/') {
						tmp[t++] = cmd[j++];
					}
					if(j == 0) {
						j = 1;
						strcpy(path, "/");
					}
					while(cmd[j] != '/') {
						tmp[t++] = cmd[j++];
					}
					++j;
					tmp[t] = '\0';
					strcpy(split[index++], tmp);
					strcpy(tmp, "");
				}
			}
			for(j = 0; j < index; ++j) {
				if(strcmp(split[j], "..") == 0) {
					if(strcmp(path, "/") != 0) {
						lpath = strlen(path) - 2;
						while(path[lpath--] != '/');
						for(t = 0; t < lpath + 2; ++t) {
							tmp[t] = path[t];
						}
						tmp[t] = '\0';
						strcpy(path, tmp);
						strcpy(tmp, "");
						strcpy(split[j], "");
					}
					continue;
				}
				strcat(path, split[j]);
				strcpy(split[j], "");
				t = strlen(path) - 1;
				if(path[t] - '/' != 0) {
					strcat(path, "/");
				}
			}
		}
	}
	return 0;
}
