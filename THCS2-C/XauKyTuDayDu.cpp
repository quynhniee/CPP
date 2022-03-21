#include<stdio.h>
#include<string.h>

int maxx (int a, int b) {
	return (a > b) ? a : b;
}
int main () {
	char s[100000];
	scanf ("%s", &s);
	int max = 0, k[100000];
	k[0] = 1;
	// dung quy hoach dong 
	// neu a[i] > a[j} thi ta so sanh thu tu tang cua a[i] va a[j]+1
	for (int i=1; i<strlen(s); i++) {
		k[i]=1;
		for (int j=0; j<i; j++) {
			if (s[i] > s[j])	k[i] = maxx (k[i], k[j]+1);
		}
		if (max < k[i])	max = k[i];
	}
	printf ("%d\n", 26-max);
	return 0;
}

