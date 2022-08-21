#include<math.h>
#include<stdio.h>
int snt(int n){
	if(n<2)	return 0;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0)	return 0;
	}
	return 1;
}

int main () {
	int n, a[100][100];
	scanf("%d", &n);
	int sum = 0, b[1000]={0}, max = 0, k;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			scanf("%d", &a[i][j]);
			if(snt(a[i][j])==1)	b[i]++;
		}
		if(max<b[i]){
			max = b[i];
			k = i;
		}
	}
// hang co nhieu snt nhat (quy uoc hang dau tien = 1)
	printf("%d\n", k+1);
	for(int j=0; j<n; j++){
		if(snt(a[k][j])==1)	printf("%d ", a[k][j]);
	}
    return 0;
}

