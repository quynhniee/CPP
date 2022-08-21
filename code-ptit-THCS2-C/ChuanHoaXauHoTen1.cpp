#include<stdio.h>
#include<string.h>

void chuyen (char s[]) {
	for (int i=0; i<strlen(s); i++){
		if (s[i] >= 'A' && s[i] <= 'Z')	s[i] += 32;
		if ((s[i-1] == ' ' || i == 0) && s[i] >= 'a' && s[i] <= 'z')	
			s[i] -= 32;
	}
	for (int i=0; i<strlen(s); i++){
		if (s[0] == ' ')	i++;
		if (s[i] == ' ' && s[i+1] == ' ')	continue;
		printf("%c", s[i]);
	}
	printf("\n");
}
int main () {
	int t;
	scanf ("%d", &t);
	while (t--) {
		scanf (" ");
		char s[10000];
		gets(s);
		chuyen(s);
	}
	return 0;
}

