#include<stdio.h>
#include<string.h>

int main () {
	int t;
	scanf ("%d", &t);
	while (t--) {
		scanf (" ");
		char s1[100000], s2[100000], b[200][200], a[202][202], temp[200][200];
		int check[100000]={0};
		gets(s1);
		scanf (" ");
		gets(s2);
		int n = 0, m = 0;
		char *p = strtok (s2, " ");
		while (p != NULL) {
			strcpy(b[m++], p);
			p = strtok (NULL, " ");
		}
		p = strtok (s1, " ");
		while (p != NULL) {
			strcpy(a[n++], p);
			p = strtok (NULL, " ");
		}
		for(int i=0; i<n-1; i++){
			for(int j=i+1; j<n; j++){
				if (strcmp(a[i], a[j]) > 0) {
					strcpy(temp[0], a[i]);
					strcpy(a[i], a[j]);
					strcpy(a[j], temp[0]);
				}
			}
		}
		for (int i=0; i<n; i++) {
			for (int j=i+1; j<n; j++) {
				if (strcmp (a[i], a[j]) == 0)	check[j] = 1;
			}
			int q = 1;
			for (int j=0; j<m; j++) {
				if (strcmp (a[i], b[j]) == 0)	q = 0;
			}
			if (q != 0 && check[i] == 0)	printf ("%s ", a[i]);
		}
		printf ("\n");
	}
	return 0;
}

