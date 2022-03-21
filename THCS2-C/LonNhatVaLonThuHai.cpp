
#include<stdio.h>

int main () {
	int n, a[100];
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	int temp = a[0], max2;
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(a[i] < a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("%d ", a[0]);
	for(int i=0; i<n; i++){
		if(a[i] != a[0]){
			printf("%d", a[i]);
			break;
		}
	}
    return 0;
}
// luu y: bai nay la tim gia tri lon thu nhat va thu 2, co TH 2 gia tri lon nhat bang nhau?
