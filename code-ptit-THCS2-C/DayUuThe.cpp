#include<stdio.h>
#include <string.h>

int main () {
	int t;
	scanf ("%d", &t);
	while (t--) {
		scanf (" ");
		char s[100000];
		gets (s);
		int n = 0, a[10000];
		for (int i=0; i<strlen(s); i++) {
			if (s[i+1] == ' ' || s[i+1] == '\0') 	a[n++] = s[i]-'0';
		}
		int even = 0, odd = 0;
		for (int i=0; i<n; i++) {
			if (a[i] % 2 == 0)	even++;
			else	odd++;
		}
		if (n%2 == 0 && even > odd)	printf ("YES\n");
		else if (n%2 == 1 && even < odd)	printf ("YES\n");
		else	printf ("NO\n");
	}
	return 0;
}

