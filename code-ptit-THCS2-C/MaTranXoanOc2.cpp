#include<stdio.h>

int a[100][100], n, m, d, c, dem, max, b[10000]; 
void nhap () {
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			scanf("%d", &a[i][j]);
		}
	}
}
void matran () {
	d = 0, c = 0, dem = 0, max = m*n;
	while(d < n && c < m && dem < max) {
		for(int i=d; i<=m-1; i++){
			printf("%d ", a[c][i]);
			dem++;
			if (dem == max)	break;
		}
		c++;
		if (dem == max)	break;
		for(int i=c; i<=n-1; i++){
			printf("%d ", a[i][m-1]);
			dem++;
			if (dem == max)	break;
		}
		m--;
		if (dem == max)	break;
		if (c < m){
			for(int i=m-1; i>=d; i--){
				printf("%d ", a[n-1][i]);
				dem++;
				if (dem == max)	break;
			}
			n--;
		}
		if (dem == max)	break;
		if (d < n){
			for(int i=n-1; i>=c; i--){
				printf("%d ", a[i][d]);
				dem++;
				if (dem == max)	break;
			}
			d++;
			if (dem == max)	break;
		}
	}
}


int main () {
	int t;
	scanf("%d", &t);
	while(t--){
		scanf("%d%d", &n, &m);
		nhap();
		matran();
		printf("\n");
	}
	return 0;
}

