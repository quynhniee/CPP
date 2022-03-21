#include<stdio.h>
#include<string.h>

int main () {
	int t;
	scanf ("%d", &t);
	while (t--) {
		scanf (" ");
		// phai gan mang rong, neu khong se bi WA
		char a[100000]="", b[100000]="", a0[100000], b0[100000];
		scanf ("%s%s", a0, b0);
		for (int i=strlen(a0)-1; i>=0; i--) {
			a[strlen(a0)-1-i] = a0[i];
		}
		for (int i=strlen(b0)-1; i>=0; i--) {
			b[strlen(b0)-1-i] = b0[i];
		}
		if (strlen(a) >= strlen(b)) {
			strcat (a, "0");
			for (int i=strlen(b); i<strlen(a); i++) {
				strcat (b, "0");
			}
		}
		else {
			strcat (b, "0");
			for (int i=strlen(a); i<strlen(b); i++) {
				strcat (a, "0");
			}
		}
		// bat buoc phai gan giatri = 0
		int s[100000]={0}, du = 0;
		for (int i=0; i<strlen(a); i++) {
			int x = a[i]-'0' + b[i]-'0' + du;
			du = x / 10;
			s[i] = x % 10;
		}
		int length = strlen(a)-1;
		if (s[strlen(a)-1]  == 0)	length--;
		for (int i=length; i>=0; i--)	printf ("%d", s[i]);
		printf ("\n");
	}
	return 0;
}

