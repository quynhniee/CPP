#include<stdio.h>
#include<string.h>

int main () {
	char a[100][100], s[100000];
	int k[100], n = 0, max = 0;
	while (scanf ("%s", &s) != -1) {
		int check = 0;
		for (int i=0; i<n; i++) {
			if (strcmp (a[i], s) == 0) {
				check = 1;
				k[i]++;
			}
		}
		if (check == 0) {
			k[n] = 1;
			strcpy (a[n++], s);
		}
		if (max < strlen(s))	max = strlen(s);
	}
	for (int i=0; i<n; i++) {
		if (max == strlen(a[i]) && k[i] != 0) {
			printf ("%s %d %d\n", a[i], max, k[i]);
		}
	}
	return 0;
}

