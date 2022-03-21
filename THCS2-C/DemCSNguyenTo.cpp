#include<string.h>
#include<stdio.h>
#include<math.h>

int snt(int n){
	if(n<2)	return 0;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0)	return 0;
	}
	return 1;
}

int main () {
	char a[100];
	int b[100]={0};
	gets(a);
	for(int i=0; i<strlen(a); i++){
		b[a[i]]++;
	}
	for(int i=0; i<strlen(a); i++){
		if(b[a[i]] > 0 && snt(a[i]-'0')){
			printf("%d %d\n", a[i]-'0', b[a[i]]);
			b[a[i]] = 0;
		}	
	}
    return 0;
}

