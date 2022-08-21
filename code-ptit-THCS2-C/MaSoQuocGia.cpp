#include<stdio.h>
#include<string.h>

int main () {
	int t;
	scanf ("%d", &t);
	while (t--) {
		scanf (" ");
		char s[10000];
		scanf ("%s", &s);
		if (s[0] == '0') {
			continue;
		}
		for (int i=0; i<strlen(s); i++) {
			if (s[i]=='0' && s[i+1]=='8' && s[i+2]=='4')	i += 3;
			if (i != strlen(s))
			printf("%c", s[i]);
		}
		printf("\n");
	}
	return 0;
}

