#include<stdio.h>
#include<string.h>

typedef struct {
	char name[100][100];
	char bday[100][100];
	double sj1[1000];
	double sj2[1000];
	double sj3[1000];
	double sum[1000];
	int thutu[1000];
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
		a->thutu[i] = i;
	}
}
void sapxep (list *a, int *n) {
	double top[1000];
	int k = 0;
	for (int i=1; i<=*n; i++) {
		top[i] = a->sum[i];
	}
	for (int i=1; i<*n; i++) {
		for (int j=i+1; j<=*n; j++) {
			if (top[i] < top [j]) {
				double t = top[i];
				top[i] = top[j];
				top[j] = t;
			}
		}
	}
	for (int j=1; j<=*n; j++) {
		for (int i=1; i<=*n; i++)
			if (top[j] == a->sum[i]) {
				printf ("%d %s %s %.1lf\n", a->thutu[i], a->name[i], a->bday[i], a->sum[i]);
				a->sum[i] = 0;
			}
	}
}
int main () {
	list a;
	int n;
	nhap (&a, &n);
	sapxep (&a, &n);
	return 0;
}

