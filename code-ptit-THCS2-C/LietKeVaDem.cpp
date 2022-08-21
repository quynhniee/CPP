#include<stdio.h>
#include<string.h>
int ktra (char s[]) {
	for (int i= 0; i<strlen(s)-1; i++) {
		if (s[i]-s[i+1] > 0)	return 0;
	}
	return 1;
}
int main () {
	char s[100000], a[1000][100];
	int n = 0, k[100], max = 0;
	while (scanf ("%s", &s) != -1) {
		if (ktra(s)==1) {
			int p = 0;
			for (int i=0; i<n; i++) {
				if (strcmp(a[i], s) == 0) {
					k[i]++;
					p = 1;
				}
				if (max < k[i])	max = k[i];
			}
			if (p==0) {
				k[n] = 1;
				strcpy (a[n++], s);
			}
		}
	}
	for (int i=max; i>0; i--) {
		for (int j=0; j<n; j++) {
			if (i == k[j])	printf ("%s %d\n", a[j], k[j]);
		}
	}
	return 0;
}

