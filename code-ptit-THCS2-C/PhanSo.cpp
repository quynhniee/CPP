#include<stdio.h>
typedef struct {
	int tu;
	int mau;
} ps;
int ucln (int a, int b) {
	while (a != b) {
		if (a > b)	a -= b;
		else	b -= a;
	}
	return a;
}
int main () {
	int t;
	scanf ("%d", &t);
	for (int k=1; k<=t; k++) {
		ps a, b;
		scanf ("%d%d%d%d", &a.tu, &a.mau, &b.tu, &b.mau);
		int p1 = ucln(a.tu, a.mau);
		if (p1 != 1) {
			a.tu /= p1;
			a.mau /= p1;
		}
		int p2 = ucln(b.tu, b.mau);
		if (p2 != 1) {
			b.tu /= p2;
			b.mau /= p2;
		}
		printf ("Case #%d:\n", k);
		// quy dong
		int s1 = ucln (a.mau, b.mau);
		printf ("%d/%d %d/%d\n",a.tu*b.mau/s1, a.mau*b.mau/s1, b.tu*a.mau/s1, b.mau*a.mau/s1);
		// tong phan so
		int s2 = ucln (a.tu*b.mau/s1 + b.tu*a.mau/s1, a.mau*b.mau/s1);
		printf ("%d/%d\n", (a.tu*b.mau/s1 + b.tu*a.mau/s1)/s2, a.mau*b.mau/s1/s2);
		// thuong
		int s3 = ucln (a.tu*b.mau, a.mau*b.tu);
		printf ("%d/%d\n", a.tu*b.mau/s3, a.mau*b.tu/s3);
	}
	return 0;
}

