#include<stdio.h>
#include<string.h>

int main () {
	while (1>0) {
		int m, n=0, k=1, check = 0;
		scanf ("%d", &m);
		if (m==0)	break;
		char s1[1000], s2[1000], s[1000], s12[100000]={}, s012[100000]={};
		scanf (" ");
		gets (s1);
		scanf (" ");
		gets (s2);
		scanf (" ");
		gets (s);
		for (int i=0; i<m; i++) {
			s12[n++] = s2[i];
			s12[n++] = s1[i];
		}
		strcpy (s012, s1);
		strcat (s012, s2);
		while (strcmp (s012, s12) != 0) {
			for (int i=0; i<m; i++) {
				s1[i] = s12[i];
				s2[i] = s12[m+i];
			}
			n = 0;
			for (int i=0; i<m; i++) {
				s12[n++] = s2[i];
				s12[n++] = s1[i];
			}
			k++;
			if (strcmp (s12, s) == 0)	{
				check = 1;
				break;
			}
		}
		if (check == 1) 	printf ("%d\n", k);
		else printf ("-1\n");
	}
	return 0;
}

