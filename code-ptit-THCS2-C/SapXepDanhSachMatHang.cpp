#include<stdio.h>
#include<string.h>

typedef struct {
	char name[100][100];
	char group[100][100];
	double mua[100];
	double ban[100];
	double lai[100];
	double sx[100];
} list;
void nhap (list *a, int *n) {
	scanf ("%d", n);
	for (int i=1; i<=*n; i++) {
		scanf ("\n");
		gets (a->name[i]);
		scanf ("\n");
		gets (a->group[i]);
		scanf ("%lf", &a->mua[i]);
		scanf ("%lf", &a->ban[i]);
		a->lai[i] = a->ban[i] - a->mua[i];
		a->sx[i] = a->lai[i];
	}
}
void ketqua (list *a, int *n) {
	for (int i=1; i<*n; i++) {
		for (int j=i+1; j<=*n; j++) {
			if (a->sx[i] < a->sx[j]) {
				double k = a->sx[i];
				a->sx[i] = a->sx[j];
				a->sx[j] = k;
			}
		}
	}
	for (int i=1; i<=*n; i++) {
		for (int j=1; j<=*n; j++) {
			if (a->sx[i] == a->lai[j]) {
				printf ("%d %s %s %.2lf\n", j, a->name[j], a->group[j],a->lai[j]);
				a->lai[j] = 0;
			}
		}
	}
}
int main () {
	list a;
	int n;
	nhap (&a, &n);
	ketqua (&a, &n);
	return 0;
}

