#include<stdio.h>
#include<math.h>
#include<string.h>

int snt (int n) {
	if (n<2)	return 0;
	for(int i=2; i<=sqrt(n); i++){
		if (n%i == 0)	return 0;
	}
	return 1;
}
int main () {
	char a[1000];
	int b[1000]={0};
	gets(a);
	for (int i=0; i<strlen(a); i++) {
		b[a[i]-'0']++;
	}
	for (int i=0; i<strlen(a); i++) {
		if (snt(a[i]-'0') == 1 && b[a[i]-'0'] != 0) {
			printf("%c %d\n", a[i], b[a[i]-'0']);
			b[a[i]-'0'] = 0;
		}
		
	}
	return 0;
}

