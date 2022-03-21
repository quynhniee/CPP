#include<stdio.h>
#include<string.h>

int main () {
	char a[100][100], s[100];
	int n = 0, check = 0;
	gets(s);
	char *b = strtok (s, " ");
	while (b != NULL) {
		strcpy(a[n], b);
		b = strtok(NULL, " ");
		n++;
	}
	for (int i=0; i<n-1; i++){
		for (int j=i+1; j<n-1; j++){
			if (strcmp(a[i], a[j]) == 0){
				check = j;
			}
			if (i != check) {
				printf("%s ", a[i]);
				break;
			}	
		}
		check = 0;
	}
	return 0;
}

