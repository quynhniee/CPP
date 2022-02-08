/*
#include <stdio.h>
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
int isValid (int a[], int n) {
    for (int i=n-1; i<n; i++)
        if (a[i]%2 == 0)    
            return 1;
    return 0;
    
}
int swap_even (int a[], int n)
int main () {
    int t;
    scanf ("%d", &t);
    while (t--) {
        int n, a[1000];
        scanf ("%d", &n);
        for (int i=0; i<n; i++)
            scanf ("%d", &a[i]);
        if (!isValid(a, n)) printf ("-1\n");
        else {
            for (int i=1; i<n; i++)
                for (int j=0; j<i; j++) 
                    if (a[i] > a[j]) {
                        swap(&a[i], &a[j]);
                    }
            for (int i = 0; i < n; i++)
            {
                printf ("%d ", a[i]);
            }
            
        }
        
    }
}
*/
#include <stdio.h>

using namespace std;

int main ()
{
	long long t;
	
	scanf("%lld",&t);
	while (t--)
	{
		long long n,chan=0,le=0,kt=0,tg,day=1;
		scanf("%lld",&n);
		long long a[n],c[n],l[n];
		for (long long i=0;i<n;i++) scanf("%lld",&a[i]);
		long long m=a[0];
		for (long long i=0;i<n;i++)
		for (long long j=i+1;j<n;j++) if (a[i]<a[j])
		{
			tg=a[i];
			a[i]=a[j];
			a[j]=tg;
		}
		for (long long i=0;i<n;i++) if (a[i]%2==0)
		{
			c[chan]=a[i];
			chan++;
		} else {
			c[le]=a[i];
			le++;
		}
			while (1)
			{
				int k, l;
	        	for (k = n-2; k>=0; k--) if (a[k] > a[k+1]) break; 
	        	if (k<0) break;                                    
	        	for (l = n-1; l>k; l--) if (a[k] > a[l]) break; 
	        	tg=a[k];
				a[k]=a[l];
				a[l]=tg;
	        	for (int i=k+1, j=n-1; i<j; i++, j--) {
		        	tg=a[i];
					a[i]=a[j];
					a[j]=tg;
				}
				if (a[n-1]%2==0) {
					for (long long i=0;i<n;i++) printf("%lld",a[i]);
					kt=1;
					break;
				}
			}
			if (kt==0) 
			{
				for (long long i=0;i<n;i++) if (a[i]!=m) day=0;
				if (day==1 && m%2==0 && n>1) 	for (long long i=0;i<n-1;i++)  printf("%lld",a[i]);
				else printf("-1");
			}
		printf("\n");
		
	}
	return 0;
}