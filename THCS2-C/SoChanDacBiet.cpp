#include<stdio.h>
#include<string.h>
int main () {
	int t;
	scanf("%d", &t);
	while (t--) {
		char s[10000];
		int k = 1;
		scanf("%s", &s);
		for(int i=0; i<strlen(s); i++){
			if ((s[i]-'0') % 2 != 0)	k = 0;
		}
		if (k == 1)	printf("YES\n");
		else	printf("NO\n");
	}
	return 0;
}

