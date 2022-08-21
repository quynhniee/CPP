#include<stdio.h>
#include<string.h>

int main () {
	char a[100000], b[100000], a0[1000][100], b0[1000][100], temp[1000][100];
	gets(a);	gets(b);
	int n = 0, m = 0, k = 1, t = 1;
	char *x = strtok(a, " ");
	while (x != NULL) {
		strcpy(a0[n++], x);
		x = strtok (NULL, " ");
//		n++;
	}
	char *y = strtok(b, " ");
	while (y != NULL) {
		strcpy(b0[m++], y);
		y = strtok(NULL, " ");
//		m++;
	}
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if (strcmp(a0[i], a0[j]) > 0) {
				strcpy(temp[0], a0[i]);
				strcpy(a0[i], a0[j]);
				strcpy(a0[j], temp[0]);
			}
		}
	}
	for (int i=0; i<n; i++){
		for (int j=0; j<m; j++){
			if (strcmp(a0[i], b0[j]) == 0) {
				k = 0;
				continue;
			} 
		}
		for (int j=i+1; j<n; j++){
			if (strcmp(a0[i], a0[j]) == 0) {
				t++;
			}
		}
		if (k != 0 && t == 1)	{
			printf("%s ", a0[i]);
		}
		k = 1; t = 1;
	}
	return 0;
}

