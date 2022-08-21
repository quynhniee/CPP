#include<math.h>
#include<stdio.h>
void nhap(int n, int a[], int b[]){
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
		b[a[i]]++;
	}
}
int snt(int n){
	if(n<2)	return 0;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i == 0)	return 0;
	}
	return 1;
}
void sapxep(int n, int a[], int b[]){
	int temp = a[0];
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(a[i] >= a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	for(int i=0; i<n; i++){
		if(b[a[i]] > 0 && snt(a[i])==1){
			printf("%d xuat hien %d lan\n", a[i], b[a[i]]);
			b[a[i]] = 0;
		}
	}
}
int main () {
	int t, n;
	int a[100000], b[100000]={0};
	scanf("%d", &t);
	for(int i=1; i<=t; i++){
		scanf("%d", &n);
		nhap(n, a, b);
		printf("Test %d:\n", i);
		sapxep(n, a, b);
	}
    return 0;
}

