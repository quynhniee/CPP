#include<stdio.h>
#include<string.h>

int main () {
	int t;
	scanf ("%d\n", &t);
	while (t--) {
		char s[10000];
		scanf ("%s", &s);
		int a0=0, a1=0, a2=0, a3=0, a4=0, a5=0, a6=0, a7=0, a8=0, a9=0, k=1;
		if (s[0] == '0') k = 0;
		for (int i=0; i<strlen(s); i++) {
			if (s[i] < '0' || s[i] > '9')		k = 0;
			if (s[i] == '0')	a0++;
			if (s[i] == '1')	a1++;
			if (s[i] == '2')	a2++;
			if (s[i] == '3')	a3++;
			if (s[i] == '4')	a4++;
			if (s[i] == '5')	a5++;
			if (s[i] == '6')	a6++;
			if (s[i] == '7')	a7++;
			if (s[i] == '8')	a8++;
			if (s[i] == '9')	a9++;
		}
		int x = a0*a1*a2*a3*a4*a5*a6*a7*a8*a9;
		if (k == 0)	printf("INVALID\n");
		else {
			if (x == 0)	printf("NO\n");
			else	printf("YES\n");
		}
	}
	return 0;
}

