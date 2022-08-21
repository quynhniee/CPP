#include<string.h>
#include<stdio.h>

void chuyen (char s[]) {
	int k = 0, p = 0, q = 0;
	for (int i=strlen(s)-1; i>=0; i--){
		if (s[i] == '1'){
			k = 1;
			p = i;
// vi tri "p" bi thay doi sau moi vong lap, do do can tim p min
// ==> ta cho for chay tu be den lon, p cuoi cung cung la p min
		}	
		if (s[i] == '8' || s[i] == '9' )	s[i] = '0';
		if (s[i] >= '2' && s[i] <= '7') {
			q = 1;
		}
	}
	if (k == 0 || q == 1){
		printf("INVALID\n");
	}	
	else {
		for (int i=p; i<strlen(s); i++) {
			printf("%c", s[i]);
		}
		printf("\n");
	}
}
int main () {
	int t;
	scanf ("%d", &t);
	while (t--) {
		scanf (" ");
		char s[10000];
		scanf ("%s", &s);
		chuyen(s);
	}
	return 0;
}

