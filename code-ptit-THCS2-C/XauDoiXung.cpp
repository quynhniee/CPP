#include<string.h>
#include<stdio.h>

void kiemtra (char s[]) {
	int k = 0;
	int m = (strlen(s)%2 == 0) ? strlen(s)/2 : (strlen(s)+1)/2;
	for (int i=0; i<m; i++) {
		if (s[i] != s[strlen(s)-i-1])	k++;
	}
	if (k==1 )	printf("YES\n");
	else if (k==0 && strlen(s)%2 == 1)	printf("YES\n");
// tinh ca TH xau da doi xung co strlen le
	else	printf("NO\n");
}
int main () {
	int t;
	scanf ("%d", &t);
	while (t--) {
		scanf (" ");
		char s[100000];
		gets (s);
		kiemtra(s);
	}
	return 0;
}

