#include<stdio.h>
#include<string.h>

int main () {
	int t;
	scanf ("%d", &t);
	while (t--) {
		scanf (" ");
		char s[10000], a[100][100];
		int n = 0;
		gets (s);
		for (int i=0; i<strlen(s); i++) {
			if (s[i] >= 'A' && s[i] <= 'Z')	s[i] += 32;
			if (s[i] >= 'a' && s[i] <= 'z' && (s[i-1] == ' ' || i==0))	s[i] -= 32;
		}
		char *p = strtok (s, " ");
		while (p != NULL) {
			strcpy (a[n++], p);
			p = strtok (NULL, " ");
		}
		for (int i=0; i<strlen(a[0]); i++)	
			if (a[0][i] >= 'a' && a[0][i] <= 'z')	a[0][i] -= 32;
		for (int i=1; i<n; i++) {
			printf ("%s", a[i]);
			if (i != n-1)	printf (" ");
		}	
		printf (", %s", a[0]);
		printf ("\n");
	}
	return 0;
}

