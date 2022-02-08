#include <bits/stdc++.h>
using namespace std;
 
int N, K, n;
vector <vector <int> > ans;
 
bool Check(string dapan, int N) {
	for (int i = 0; i < dapan.size(); ++i)
		if(dapan[i] < '0' || dapan[i] > '9')
			dapan[i] = ' ';
	stringstream ss(dapan);
	int k;
	vector <vector <int> > a;
	a.resize(n);
	int s = 0;
	while(ss >> k) {
		a[s].push_back(k);
		if(a[s].size() == N)
			++s;
	}
	return a == ans;
}
 
void xuat(int a[], int N) {
	vector <int> temp;
	for (int i = 0; i < N; ++i) {
		cout << a[i] << " ";
		temp.push_back(a[i]);
	}
	cout << endl;
	ans.push_back(temp);
}
 
void sinhtohoptruoc(int a[], int N, int K) {
	int i = K-1;
	while(i >= 1 && a[i] == a[i-1] + 1)
		--i;
	--a[i];
	for (int j = i+1; j < K; ++j)
		a[j] = N-K+j+1;
}
 
void tohoptruoc(int a[], int N, int K) {
	cout << "So to hop lien ke phia truoc: ";
	cin >> n;
	cout << n << " to hop lien ke phia truoc la:\n";
	for (int i = 0; i < n; ++i) {
		sinhtohoptruoc(a, N, K);
		xuat(a, K);
	}
}
 
void sinhtohopsau(int a[], int N, int K) {
	int i = K-1;
	while(i >= 0 && a[i] == N-K+i+1)
		--i;
	if(i >= 0) {
		++a[i];
		for (int j = i+1; j < K; ++j)
			a[j] = a[j-1] + 1;
	}
}
 
void tohopsau(int a[], int N, int K) {
	cout << "So to hop lien ke phia sau: ";
	cin >> n;
	cout << n << " to hop lien ke phia sau la:\n";
	for (int i = 0; i < n; ++i) {
		sinhtohopsau(a, N, K);
		xuat(a, K);
	}
}
 
void tohop() {
	cout << "To hop chap K cua N:\n";
	cout << "Nhap N: ";
	cin >> N;
	cout << "Nhap K: ";
	cin >> K;
	cout << "Nhap to hop: ";
	int a[K];
	for (int i = 0; i < K; ++i) cin >> a[i];
	cout << "1: To hop lien ke phia truoc\n";
	cout << "2: To hop lien ke phia sau\n";
	int choose;
	cin >> choose;
	if(choose == 1) tohoptruoc(a, N, K);
	else tohopsau(a, N, K);
}
 
void sinhhoanvitruoc(int a[], int N) {
	int i = N-2;
	while(i >= 0 && a[i] < a[i+1])
		--i;
	if(i >= 0) {
		int j = N-1;
		while(a[j] > a[i])
			--j;
		swap(a[i], a[j]);
		int l = i+1, r = N-1;
		while(l < r) swap(a[l++], a[r--]);
	}
}
 
void hoanvitruoc(int a[], int N) {
	cout << "So hoan vi lien ke phia truoc:\n";
	cin >> n;
	cout << n << " hoan vi lien ke phia truoc la:\n";
	for (int i = 0; i < n; ++i) {
		sinhhoanvitruoc(a, N);
		xuat(a, N);
	}
}
 
void sinhhoanvisau(int a[], int N) {
	int i = N-2;
	while(i >= 0 && a[i] > a[i+1])
		--i;
	if(i >= 0) {
		int j = N-1;
		while(a[j] < a[i])
			--j;
		swap(a[i], a[j]);
		int l = i+1, r = N-1;
		while(l < r) swap(a[l++], a[r--]);
	}
}
 
void hoanvisau(int a[], int N) {
	cout << "So hoan vi lien ke phia sau:\n";
	cin >> n;
	cout << n << " hoan vi lien ke phia sau la:\n";
	for (int i = 0; i < n; ++i) {
		sinhhoanvisau(a, N);
		xuat(a, N);
	}
}
 
void hoanvi() {
	cout << "Hoan vi cua N phan tu\n";
	cout << "Nhap N: ";
	cin >> N;
	cout << "Nhap hoan vi: ";
	int a[N];
	for (int i = 0; i < N; ++i)
		cin >> a[i];
	cout << "1: Hoan vi lien ke phia truoc\n";
	cout << "2: Hoan vi lien ke phia sau\n";
	int choose;
	cin >> choose;
	if(choose == 1) hoanvitruoc(a, N);
	else hoanvisau(a, N);
}
 
void sinhnhiphantruoc(int a[], int N) {
	int i = N-1;
	while(i >= 0 && a[i] == 0)
		a[i--] = 1;
	if(i >= 0) a[i] = 0;
}
 
void nhiphantruoc(int a[], int N) {
	cout << "So day nhi phan lien ke phia truoc:\n";
	cin >> n;
	cout << n << " day nhi phan lien ke phia truoc la:\n";
	for (int i = 0; i < n; ++i) {
		sinhnhiphantruoc(a, N);
		xuat(a, N);
	}
}
 
void sinhnhiphansau(int a[], int N) {
	int i = N-1;
	while(i >= 0 && a[i] == 1)
		a[i--] = 0;
	if(i >= 0) a[i] = 1;
}
 
void nhiphansau(int a[], int N) {
	cout << "So day nhi phan lien ke phia sau:\n";
	cin >> n;
	cout << n << " day nhi phan lien ke phia sau la:\n";
	for (int i = 0; i < n; ++i) {
		sinhnhiphansau(a, N);
		xuat(a, N);
	}
}
 
void nhiphan() {
	cout << "Day nhi phan co do dai N\n";
	cout << "Nhap N: ";
	cin >> N;
	cout << "Nhap day nhi phan: ";
	int a[N];
	for (int i = 0; i < N; ++i)
		cin >> a[i];
	cout << "1: Day nhi phan lien ke phia truoc\n";
	cout << "2: Day nhi phan lien ke phia sau\n";
	int choose;
	cin >> choose;
	if(choose == 1) nhiphantruoc(a, N);
	else nhiphansau(a, N);
}
 
int main() {
	int test = 1;
	while(test) {
		int choose = 0;
		cout << "Moi nhap lua chon:\n";
		cout << "1: Liet ke to hop\n";
		cout << "2: Liet ke hoan vi\n";
		cout << "3: Liet ke xau nhi phan\n";
		cin >> choose;
		if(choose == 1) tohop();
		else if(choose == 2) hoanvi();
		else nhiphan();
		cout << "------ Check dap an ------\n";
		bool check = false;
		while(!check) {
			cout << "Nhap dap an: ";
			string dapan;
			scanf("\n");
			getline(cin, dapan);
			if(choose == 1) check = Check(dapan, K);
			else check = Check(dapan, N);
			if(check == 0) cout << "False\n";
			else cout << "True\n";
		}
		ans.clear();
		cout << "---------------------------------\n";
		cout << "Press 1 to continue ";
		string Test;
		cin >> Test;
		if(Test == "1") test = 1;
		else test = 0;
	}
	return 0;
}
 