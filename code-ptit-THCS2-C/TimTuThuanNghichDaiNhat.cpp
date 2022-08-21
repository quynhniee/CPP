#include<stdio.h>
#include<string.h>

int check (char s[]) {
	for (int i=0; i<strlen(s)/2; i++) {
		if (s[i] != s[strlen(s)-1-i])	return 0;
	}
	return 1;
}
int main () {
	char s[100000], a[100][100];
	int n=0, count[100], max=0;
	while (scanf ("%s", &s) != -1) {
		if (check(s)==1) {
			int k = 0;
			for (int i=0; i<n; i++) {
				if (strcmp(a[i], s) == 0) {
					count[i]++;
					k = 1;
				}
			}
			if (k==0) {
				count[n] = 1;
				strcpy (a[n++], s);
			}
			if (max < strlen(s))	max = strlen(s);
		}
	}
	for (int i=0; i<n; i++) {
		if (max == strlen(a[i]) && count[i] != 0) {
			printf ("%s %d\n", a[i], count[i]);
		}
	}
	return 0;
}

