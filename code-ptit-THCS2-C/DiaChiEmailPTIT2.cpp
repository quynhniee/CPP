#include<stdio.h>
#include<string.h>

int main () {
	int t;
	scanf ("%d", &t);
	char x[100][100];
	for (int k=0; k<t; k++) {
		scanf (" ");
		char s[100000], a[100][100];
		gets (s);
		int check [10000] = {0};
		for (int i=0; i<strlen(s); i++) {
			if (s[i] >= 'A' && s[i] <= 'Z')	s[i] += 32;
		}
		int n = 0;
		char *p = strtok (s, " ");
		while (p != NULL) {
			strcpy (a[n++], p);
			p = strtok (NULL, " ");
		}
		strcpy (x[k], a[n-1]);
		printf("%s", a[n-1]);
		for (int i=0; i<n-1; i++)	{
			printf ("%c", a[i][0]);
			strncat (x[k], a[i], 1);
			check [k] = 1;
		}
		for (int i=0; i<k; i++) {
			if (strcmp (x[k], x[i]) == 0) {
				check[k]++;
			}
		}
		if (check[k] > 1)	printf ("%d", check[k]);
		printf ("@ptit.edu.vn\n");
	}
	return 0;
}

