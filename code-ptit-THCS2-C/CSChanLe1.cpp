//
//#include<bits/stdc++.h>
//
//using namespace std;
//
//int main () {
//	long n;
//	cin >> n;
//	int le=0, chan=0;
//	while(n != 0){
//		int a = n%10;
//		n /= 10;
//		if(a%2 == 1)	le++;
//		else 			chan++;
//	}
//	cout << le << " " << chan;
//    return 0;
//}

#include<stdio.h>
int main () {
    long n;
    scanf("%ld", &n);
    int le = 0, chan = 0;
    while( n!=0){
        long a = n%10;
        n /= 10;
        if(a%2 == 0 )  chan++;
        else le++;
    }
    printf("%d %d", le, chan);
    return 0;
}
