#include<string.h>
#include<stdio.h>

int main () {
	int t;
	scanf ("%d", &t);
	while (t--) {
		int a[10000]={0}, b[10000]={0}, n=0, max=0;
		char s1[10000]={}, s2[10000]={}, s[1000][100]={};
		scanf (" ");
		gets (s1);
		scanf (" ");
		gets (s2);
		strcat (s1, " ");
		strcat (s1, s2);
		char *p = strtok (s1, " +");
		while (p != NULL) {
			int x = -1, y = -1;
			for (int i=0; i<strlen(p); i++) {
				if (p[i] == '*')	x = i;
				if (p[i-1] == '^')	y = i;
			}
			for (int i=0; i<x; i++) {
				a[n] = a[n]*10 + p[i]-'0';
			}
			for (int i=y; i<strlen(p); i++) {
				b[n] = b[n]*10 + p[i]-'0';
			}
			p = strtok (NULL, " +");
			n++;
		} 
		for (int i=0; i<n-1; i++) {
			for (int j=i+1; j<n; j++) {
				if (b[i] == b[j]) {
					a[i] += a[j];
					a[j] = 0;
				}
				if (a[i] != 0)	max = i;
				if (b[i] < b[j]) {
					int k = b[i];
					b[i] = b[j];
					b[j] = k;
					k = a[i];
					a[i] = a[j];
					a[j] = k;
				}
			}
		}
		for (int i=0; i<n; i++) {
			if (a[i] != 0) {
				printf ("%d*x^%d", a[i], b[i]);
				if (i < max)	printf (" + ");
			}
		}
		printf ("\n");
	}
	return 0;
}

