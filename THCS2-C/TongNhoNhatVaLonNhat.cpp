#include<stdio.h>
#include<string.h>

void max (char s[], long long n) {
	for (int i=0; i<strlen(s); i++) {
		if (s[i]=='5')	s[i] = '6';
		n = n*10 + (s[i] - '0');
	}
}
int main () {
	int t;
	scanf ("%d", &t);
	while (t--) {
		scanf (" ");
		char s1[100], s2[100];
		scanf ("%s%s", &s1, &s2);
		long long n = 0, m = 0;
		for (int i=0; i<strlen(s1); i++) {
			if (s1[i]=='6')	s1[i] = '5';
			n = n*10 + (s1[i] - '0');
		}
		for (int i=0; i<strlen(s2); i++) {
			if (s2[i]=='6')	s2[i] = '5';
			m = m*10 + (s2[i] - '0');
		}
		printf ("%lld ", m+n);
		m = 0, n = 0;
		for (int i=0; i<strlen(s1); i++) {
			if (s1[i]=='5')	s1[i] = '6';
			n = n*10 + (s1[i] - '0');
		}
		for (int i=0; i<strlen(s2); i++) {
			if (s2[i]=='5')	s2[i] = '6';
			m = m*10 + (s2[i] - '0');
		}
		printf ("%lld\n", m+n);
	}
	return 0;
}

