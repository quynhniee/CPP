#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct {
	char name[100][100];
	char bday[100][100];
	double sj1[1000];
	double sj2[1000];
	double sj3[1000];
	double sum[1000];
} list;
void nhap (list *a, int *n) {
	scanf ("%d", n);
	for (int i=1; i<=*n; i++) {
		scanf (" ");
		gets (a->name[i]);
		gets (a->bday[i]);
		scanf ("%lf", &(a->sj1[i]));
		scanf ("%lf", &(a->sj2[i]));
		scanf ("%lf", &(a->sj3[i]));
		a->sum[i] = (a->sj1[i] + a->sj2[i] + a->sj3[i]);
	}
}
void ketqua (list *a, int *n) {
	double max = 0, k = 0;
	for (int i=1; i<=*n; i++) {
		if (max < a->sum[i]) {
			max = a->sum[i];
		}
	}
	for (int i=1; i<=*n; i++) {
		if (max == a->sum[i]) 
			printf ("%d %s %s %.1lf\n", i, a->name[i], a->bday[i], a->sum[i]);
	}
}
int main () {
	list a;
	int n;
	nhap (&a, &n);
	ketqua (&a, &n);
	return 0;
}

