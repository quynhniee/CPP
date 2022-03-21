#include<stdio.h>
#include<string.h>
int kt (char s[]) {
	for (int i=1; i<strlen(s)-1; i++){
		if(s[i] != s[strlen(s)-1-i])	return 0;
	}
	return 1;
}
int cs (char s[]) {
	if ((s[0]-'0') == 2 * (s[strlen(s)-1]-'0')) return 1;
	if ((s[strlen(s)-1]-'0') == 2 * (s[0]-'0'))	return 1;
	return 0;
}
int main () {
	int t;
	scanf("%d\n", &t);
	while (t--){
		char s[10000];
		gets(s);
		if (kt(s) && cs(s))	printf("YES\n");
		else	printf("NO\n");
	}
	return 0;
}

