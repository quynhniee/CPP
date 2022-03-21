#include<string.h>
#include<stdio.h>

int main () {
	char a[100];
	scanf("%s", &a);
	if(a[strlen(a)-1] != '0')
		printf("%c", a[strlen(a)-1]);
	for(int i=1; i<strlen(a)-1; i++){
		printf("%c", a[i]);
	}
	printf("%c", a[0]);
    return 0;
}

