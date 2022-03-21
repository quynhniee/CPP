
#include<stdio.h>

int main () {
	int n;
	scanf("%d", &n);
	int a[100], b[100]={0};
	for(int i=0; i<n; ++i){
		scanf("%d", &a[i]);
	}
	for(int i=0; i<n; ++i){
		b[a[i]]++;
	}
	int count = 0;
	for(int i=0; i<n; ++i){
		if(b[a[i]]==1)	count++;
	}
	printf("%d\n", count);
	for(int i=0; i<n; ++i){
		if(b[a[i]]==1)	printf("%d ", a[i]);
	}
    return 0;
}

