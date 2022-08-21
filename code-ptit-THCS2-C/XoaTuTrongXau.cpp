#include<stdio.h>
#include<string.h>

int main () {
	int t;
	scanf ("%d", &t);
	for (int k=1; k<=t; k++) {
		char s[100000],s0[10000], a[100][100], b[100][100];
		int n=0;
		scanf (" ");
		gets (s);
		scanf (" ");
		scanf ("%s", &s0);
		char *p = strtok (s, " ");
		while (p != NULL) {
			strcpy (a[n], p);
			for (int i=0; i<strlen(p); i++) {
				if (p[i] >= 'A' && p[i] <='Z')	p[i] += 32;
			}
			strcpy (b[n++], p);
			p = strtok (NULL, " ");
		}
		for (int i=0; i<strlen(s0); i++) {
			if (s0[i] >= 'A' && s0[i] <='Z')	s0[i] += 32;
		}
		printf ("Test %d: ", k);
		for (int i=0; i<n; i++) {
			if (strcmp (s0, b[i]) != 0)	printf ("%s ", a[i]);
		}
		printf ("\n");
	}
	return 0;
}

