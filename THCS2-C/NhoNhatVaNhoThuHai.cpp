
#include<stdio.h>

int main () {
	int n, a[100];
	scanf("%d", &n);
	for(int i=0; i<n; ++i){
		scanf("%d", &a[i]);
	}
	int temp = a[0];
	for(int i=0; i<n; ++i){
		for(int j=i+1; j<n; ++j){
			if(a[i]>a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("%d ", a[0]);
	for(int i=0; i<n; ++i){
		if(a[i] != a[0]){
			printf("%d", a[i]);
			break;
		}
	}
    return 0;
}

