#include <bits/stdc++.h>
using namespace std;
 
bool check(int n, vector <int> number) {
	for (int i:number)
		if(n%i == 0) return true;
	return false;
}
 
int main() {
	cout << "Nhap cac so chia: ";
	string Input;
	getline(cin, Input);
	vector <int> number;
	int N;
	stringstream ss(Input);
	while(ss >> N)
		number.push_back(N);
	cout << "Nhap [L;R]: ";
	string LR;
	getline(cin, LR);
	for (int i = 0; i < LR.size(); ++i)
		if(LR[i] > '9' || LR[i] < '0')
			LR[i] = ' ';
	stringstream sS(LR);
	int L = 0, R = 0;
	while(sS >> N)
		L == 0 ? L = N : R = N;
	int cnt = 0;
	for (int i = L; i <= R; ++i)
		cnt += (check(i, number));
	cout << "So so chia het cho ";
	for (int i:number)
		cout << i << " ";
	cout << "trong doan [" << L << ";" << R << "] la: " << cnt << endl;
	cout << "So so khong chia het cho ";
	for (int i:number)
		cout << i << " ";
	cout << "trong doan [" << L << ";" << R << "] la: " << R - L + 1 - cnt << endl;
	return 0;
}
 