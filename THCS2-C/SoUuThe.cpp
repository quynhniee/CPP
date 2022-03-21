#include<stdio.h>
#include<string.h>
int main () {
	int t;
	scanf ("%d", &t);
	while (t--) {
		scanf (" ");
		char s[10000];
		scanf ("%s", &s);
		int even = 0, odd = 0, kt = 1;
		for (int i=0; i<strlen(s); i++) {
			if (s[i] > '9' || s[i] < '0') {
				kt = 0;
				break;
			}
			if ((s[i]-'0') % 2 == 0)	even++;
			if ((s[i]-'0') % 2 == 1)	odd++;
		}
		if (kt == 0)	printf ("INVALID\n");
		else {
			if (strlen(s) % 2 == 0 && even > odd)	printf ("YES\n");
			else if (strlen(s) % 2 == 1 && even < odd)	printf ("YES\n");
			else 	printf ("NO\n");
		}
	}
	return 0;
}

