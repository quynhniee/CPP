#include<stdio.h>
#include<string.h>

int main () {
	int t;
	scanf ("%d", &t);
	while (t--) {
		char a[10000];
		scanf("%s", &a);
		int le = 0, chan = 0;
		for (int i=0; i<strlen(a); i++){
			if ((a[i]-'0') % 2 == 0)	chan++;
			else	le++;
		}
		if(le>chan)	printf("YES\n");
		else	printf("NO\n");
	}
	return 0;
}

