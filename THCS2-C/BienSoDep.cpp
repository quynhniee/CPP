#include<stdio.h>
#include<string.h>
int main () {
	int t;
	scanf ("%d", &t);
	while (t--) {
		scanf (" ");
		char s1[100], s2[100];
		scanf ("%s%s", s1, s2);
		int k = strlen(s2);
		for (int i=3; i<k; i++) {
			s2[i] = s2[i+1];
		}
		k--;
		int tang = 1, giong = 1, locphat = 0, daucuoi = 0;
		for (int i=0; i<k; i++) {
			if (i != k-1 && s2[i+1] <= s2[i])	tang = 0;
			if (s2[i] != s2[i+1])	giong = 0;
			if (s2[i] == '6' || s2[i] == '8')	locphat++;
		}
		if (s2[0]==s2[1] && s2[1]==s2[2] && s2[3]==s2[4])	daucuoi = 1;
		if (tang == 1 || giong == 1 || locphat == k || daucuoi == 1)	printf ("YES\n");
		else	printf ("NO\n");
	}
	return 0;
}

